def isPrime(n):
    if n==1 or n==0:
        return False
    for i in range(2,int(n**0.5)+1):
        if n%i==0:
            return False
        
    return True

first = input("Enter the lower bound: ")
second = input("Enter the upper bound: ")
first = int(first)
second = int(second)
list = []
for i in range(first,second+1):
    if isPrime(i):
        list.append(i)
        
print(list)