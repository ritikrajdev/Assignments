basic = int(input("Enter your base salary: "))
gross = basic
if (basic <= 10000):
    gross = gross + 0.20*basic+0.80*basic
elif(basic<=20000):
    gross = gross + 0.25*basic+0.90*basic
else:
    gross = gross + 0.30*basic+0.95*basic
print("Your gross salary is", gross)