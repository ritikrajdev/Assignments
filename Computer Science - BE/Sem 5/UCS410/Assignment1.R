#question 1
#LCG equation
#x(i+1)=(a*x(i)+c)%%m
lcg<-function(seed_value, num_of_students)
{
  #assign random values to multiplier(a) and increment(c)
  a=1234
  c=1
  #the modulus value should give a range of 0-100, therefore taking m=101
  m=101
  marks<-vector(length=num_of_students)
  for(i in 1:num_of_students)
  {
    seed_value=(a*seed_value+c)%%m
    marks[i]=seed_value
  }
  return(marks)
  
}
#generating random marks between 0 to 100 for 6 subjects for 750 students
sub1<-lcg(123, 750)
sub2<-lcg(1001, 750)
sub3<-lcg(1123, 750)
sub4<-lcg(1023, 750)
sub5<-lcg(1223, 750)
sub6<-lcg(6969, 750)
sum<-sub1+sub2+sub3+sub4+sub5+sub6

#question 2
#mean, median and standard deviation of sub1
mean(sub1)
sd(sub1)
median(sub1)
#histogram
hist(sub1)

#mean, median and standard deviation of sub2
mean(sub2)
sd(sub2)
median(sub2)
#histogram
hist(sub2)

#mean, median and standard deviation of sub3
mean(sub3)
sd(sub3)
median(sub3)
#histogram
hist(sub3)

#mean, median and standard deviation of sub4
mean(sub4)
sd(sub4)
median(sub4)
#histogram
hist(sub4)

#mean, median and standard deviation of sub5
mean(sub5)
sd(sub5)
median(sub5)
#histogram
hist(sub5)

#mean, median and standard deviation of sub6
mean(sub6)
sd(sub6)
median(sub6)
#histogram
hist(sub6)

#mean, median and standard deviation of total marks
mean(sum)
sd(sum)
median(sum)
#histogram
hist(sum)

result<-data.frame(sub1, sub2, sub3, sub4, sub5, sub6, sum)

#question 3
#IQR=Q3-Q1
#Outliers: below Q1-1.5IQR and above Q3+1.5IQR
outlier<-function(data)
{
  q<-as.numeric(quantile(sub1))
  #IQR=Q3-Q1
  IQR=q[4]-q[2]
  #defining range for outliers
  min=q[2]-1.5*IQR
  max=q[4]+1.5*IQR
  
  for(val in data)
  {
    #print(val>max)
    if(val<min||val>max)
    {
      print("Outlier")
      print(val)
    }
  }
  return("Done")
}
#finding outliers in all the six subjects
outliersub1<-outlier(sub1)
outliersub2<-outlier(sub2)
outliersub3<-outlier(sub3)
outliersub4<-outlier(sub4)
outliersub5<-outlier(sub5)
outliersub6<-outlier(sub6)