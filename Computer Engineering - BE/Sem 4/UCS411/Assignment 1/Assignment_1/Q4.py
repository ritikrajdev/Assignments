n = input("Enter the size of first list: ")
m = input("Enter the size of second list: ")
n = int(n)
m = int(m)
list1 = []
list2 = []
list3 = []
print("Enter the elements of first list: ")
for i in range(n):
    val = int(input())
    list1.append(val)
print("Enter the elements of second list: ")
for i in range(m):
    val = int(input())
    list2.append(val)
    
for i in range(n):
    for j in range(m):
        if(list1[i]==list2[j]):
            list3.append(list1[i])


print("Total common elements :" , len(list3))          
print(list3)