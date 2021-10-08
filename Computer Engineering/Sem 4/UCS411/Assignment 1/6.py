import random
res = random.sample(range(1, 20), 10)
print(res)
e_count = 0
o_count = 0

print("Odds are:")
for i in res:
    if(i % 2 != 0):
        print(i, " ", end="")
        o_count += 1
print("Odd count is: ", o_count)

print("\nEvens are:")
for i in res:
    if(i % 2 == 0):
        print(i, " ", end="")
        e_count += 1
print("Even count is: ", e_count)

print("\nPrimes are:")
p_count = 0
for num in res:
    if num > 1:
        for i in range(2, num):
            if(num % i == 0):
                break
        else:
            p_count += 1
            print(num, " ", end="")
print("Primes count is: ", p_count)
