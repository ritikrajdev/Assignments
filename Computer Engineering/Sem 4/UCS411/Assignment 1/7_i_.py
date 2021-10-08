import compound_intrest as ci

# def CompIntrest(p_a,r,time):
#   return (p_a * pow((1+r/100),time))

# p_a = int(input("Enter principal amount:"))
# c_rate = float(input("Enter rate:"))
# time = int(input("Enter time:"))

res = ci.CompIntrest(2000000, 6.5, 2)
print("Compound Intrest is: ", res)
