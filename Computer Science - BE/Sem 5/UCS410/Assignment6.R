Lab Assignment 6
# Q1) Six animals with some names are lined up together. 
# Calculate the probability of lineup in an order of alphabetic series with an assumption that none is having the same name.  
# Also compare the estimated probability result with actual value of probability

n<-5e5
animals<-1:6
solve<-function(){
  succ<-0
  succ<-succ+identical(sample(animals,size=6,replace = FALSE),1:6)
  return(succ)
}
n1<-replicate(100000,solve())

ans_prob=mean(n1)
expected_probablity=1/factorial(6)

print(ans_prob)
print(expected_probablity)

plot(density(n1),expected_probablity,main=paste("Probability"))

# Q4) In Question 3, let suppose 3 animals are dogs and remaining are horses. 
# Now calculate the probability all dogs come first.  Also compare the estimated probability result with actual value of probability
n<-5e5
animals<-c(2,2,2,1,1,1)
sorted<-c(1,1,1,2,2,2)
solve<-function(){
  succ<-0
  succ<-succ+identical(sample(animals,size=6,replace = FALSE),sorted)
  return(succ)
}
v<-replicate(100000,solve())

ans_prob=mean(v)
expected_probablity=1/factorial(6)

print(ans_prob)
print(expected_probablity)

plot(density(v),expected_probablity,main=paste("Probablity"))

