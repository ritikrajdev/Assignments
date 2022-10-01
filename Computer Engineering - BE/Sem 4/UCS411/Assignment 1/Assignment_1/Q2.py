import math
from random import randint, random

def isPrime(n):
    if n==1 or n==0:
        return False
    for i in range(2,int(n**0.5)+1):
        if n%i==0:
            return False
        
    return True


list = []
for i in range(100):
    list.append(randint(100,900))

for i in range(100):
    if list[i]%2==1:
        print(list[i],end=" ")
print()
for i in range(100):
    if list[i]%2==0:
        print(list[i],end=" ")
print()
for i in range(100):
    if isPrime(list[i]):
        print(list[i],end=" ")
    