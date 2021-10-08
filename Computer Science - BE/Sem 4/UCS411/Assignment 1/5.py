D = {
    1: "One",
    2: "Two",
    3: "Three",
    4: "Four",
    5: "Five"
}
print(D)
# add key 6
D[6] = "Six"
print(D)
# remove key 2
# del D[2]
# print(D)
# check key 6 is present or not
if(6 in D.keys()):
    print("Yes Present")
else:
    print("Not Present")
print(D.keys())
print("Number of counts in the list is ", len(D))

# sum(str(D.values())
for data in D.values():
    print(data + " ", end="")
