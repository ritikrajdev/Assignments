import math
n = input("Enter the value of n: ")
x = input("Enter the value of x: ")
n = int(n)
x = int(x)
sum = 0
p = 0
fact = 0
for i in range(n+1):
    sum = sum + pow(x,p)/math.factorial(fact)
    fact = fact+1
    p = p + 1
print(sum);