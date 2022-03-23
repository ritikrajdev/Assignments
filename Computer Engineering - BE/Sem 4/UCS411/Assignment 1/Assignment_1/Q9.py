D= {1:"One", 2:"Two", 3:"Three", 4: "Four", 5:"Five"}
D[6] = "Six"
D.pop(2)
if 6 in D:
    print("Present")
else:
    print("Not Present")
print(len(D))
sum = 0
for i in D:
    sum+=i
print(sum)
print(D)