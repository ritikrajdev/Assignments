#Question 1
s=1
n=100
p1=numeric(n)
for(i in 1:n)
{
  s=s*(365-(i-1))/365
  p=1-s
  p1[i]=p
  print(p)
}
plot(p1, type='1')
sum_total=sum(p1)
print('Probability the 2 of them have have birthday on the same day is: ')
print(sum_total/100)
#Question 2
#defining the price vector
price=c(1:100)
for(i in 1:100)
{
  k=sample(c(0, 1), size=10, replace=TRUE, p=c(0.4, 0.6))
  x=sum(k)
  price[i]=x^2 - 7*x
}
hist(price, col='blue', border='black', breaks=10)