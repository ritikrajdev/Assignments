def calculate(subject,s_name):
    max_in_sub = max(subject)
    min_in_sub = min(subject)
    print(f"{s_name} Score => {subject} | Highest:  {max_in_sub} | Lowest: {min_in_sub} | Overall: {sum(subject)} | Average: {(sum(subject))/len(subject)} " )



maths = list(map(int,input("Enter Maths Marks of Student : ").split()))
# science = list(map(int,input("Enter English Marks of Student : ").split()))
# english = list(map(int,input("Enter Science Marks of Student : ").split()))
# IT = list(map(int,input("Enter IT Marks of Student : ").split()))

calculate(maths,"Maths")
# calculate(science,"Science")
# calculate(english,"English")
# calculate(IT,"IT")
