#Assignment 3
#using random number generators in R
#redoing assignment 1 with in-built functions

#using the rnorm(no_of_observations, mean, standard_deviation) function
#mean=0 and sd=1 by default
subject1<-rnorm(750, 50, 1)

#using the runif(no_of_observations, min=a, max=b) function
subject2<-runif(750, 0, 100)

#using the sample(samplespace, size=n, replace=FALSE, prob=NULL)
#replace=FALSE and prob=NULL are default
samplespace<-runif(1000, 0, 100)
subject3<-sample(samplespace, 750)

#using the randu() function -- couldn't find proper documentation
subject4<-randu[1:750, 1]*100

#now we have to find the measures of central tendency

#defining the mode function
modevalue<-function(subject)
{
 uniqueval<-unique(subject)
 uniqueval[which.max(tabulate(match(subject, uniqueval)))]
}

#defining the mean deviation function
meandeviation<-function(subject)
{
  m=sum(abs(subject-mean(subject)))/length(subject)
  return(m)
}
library(moments)

print(mean(subject1))
print(median(subject1))
#no inbuilt function for mode
print(modevalue(subject1))
print(range(subject1))
#no inbuilt function for mean deviation
print(meandeviation(subject1))
#standard deviation
print(sd(subject1))
#variance
print(var(subject1))
#root mean square deviation

#gaussian plot for subject 1
studentid<-seq(1, 750, by=1)
plot(studentid, subject1)
skewness(subject1)
kurtosis(subject1)