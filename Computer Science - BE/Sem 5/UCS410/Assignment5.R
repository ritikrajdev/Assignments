#rle(x) function
#run length encoding, has two values associated with it-> lengths and values
#lengths-> represents the no. of continuous occurrences of a value
#values-> represents the value corresponding to the length

#rbinom(n, x, p) is for binomial distribution simulation
#n-> represents the total number of trials
#x-> represents the event for which the probability is to be calculated
#p-> represents the probability of event x to occur

#question 1
#number of simulations
nsim<-1e5L
#number of samples picked
n<-250L
num_success<-0L
#the probability of getting a defective/non-defective item is equally likely
#hence, p=0.5
#probability of getting the same type of item 16 times in a row
#let 1 represents non-defective and 0 represents defective
for(i in 1:nsim)
{
  num_success<-num_success + (max(rle(rbinom(n, 1, 0.5))$lengths)>=16)
}

#estimated probability
print(num_success/nsim)

#question2
#number of simulations
nsim<-1e5L
#number of samples picked
n<-8L
num_success<-0L
p<-0L
#the probability of getting a defective/non-defective item is equally likely
#hence, p=0.5
#probability of getting no same type of item in a ma'am
#let 1 represents non-defective and 0 represents defective
for(i in 1:nsim)
{
  x<-rle(rbinom(n, 1, 0.5))
  num_success<-0L
  for(i in x$length)
  {
    if(i<=1)
      num_success<-num_success+1
  }
  p<-p+num_success/n
}

#estimated probability
print(p/nsim)