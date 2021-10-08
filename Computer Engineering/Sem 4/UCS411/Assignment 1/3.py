def pswdFunc(psswd):
    spcl_char = ['@', '$', '#', '*']
    if len(psswd) < 6:
        print("Password must contain 8 characters!")
        return False
    if len(psswd) > 16:
        print("Password maximum length is 16 characters!")
        return False
    if not any(char.isupper() for char in psswd):
        print("Password must contain atleast 1 Uppercase!")
        return False
    if not any(char.isdigit() for char in psswd):
        print("Password must contain atleast 1 number!")
        return False
    if not any(char.islower() for char in psswd):
        print("Password must contain atleast 1 Lowercase!")
        return False
    if not any(char in spcl_char for char in psswd):
        print("Password must contain atleast 1 Special Character!")
        return False
    else:
        return True



psswd = input("Enter Password:")
if(pswdFunc(psswd)):
    print("Valid")
else:
    print("Invalid")