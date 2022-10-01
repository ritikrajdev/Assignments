start = int(input("Enter the starting Year: "))
end = int(input("Enter the ending Year: "))
list = []
for i in range(start,end+1):
    if(i%4==0 and i%100!=0):
        list.append(i)
    elif(i%100==0 and i%400==0):
        list.append(i)
print(list)
