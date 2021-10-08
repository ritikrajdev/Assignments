''' Qustion 4.
    Create a List L that is defined as= [10, 20, 30, 40, 50, 60, 70, 80].

    (i) WAP to add 200 and 300 to L.
    (ii) WAP to remove 10 and 30 from L.
    (iii) WAP to sort L in ascending order.
    (iv) WAP to sort L in descending order.
'''

# Solution

L = [10, 20, 30, 40, 50, 60, 70, 80]

#  (i)
L.extend([200, 300])
print(L)

# (ii)
for ele in L:
    if ele == 10 or ele == 30:
        print(ele)
        L.remove(ele)
print(L)

# (iii)
L.sort()
print(L)

# (iv)
L.sort(reverse=True)
print(L)
