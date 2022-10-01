pwd = input("Enter the password: ")
if(len(pwd)<6 or len(pwd)>16):
    print('''Your Password should qualify following conditions: 
        At least 1 letter between [a-z] and 1 letter between [A-Z].
        At least 1 number between [0-9].
        At least 1 character from [$#@].
        Minimum length 6 characters.
        Maximum length 16 characters.''')
else:
    lower,upper,digit,special=0,0,0,0
    for i in pwd:
        if(i == '$' or i == '#' or i == '@'):
            special+=1
        elif(i.isdigit()):
            digit+=1    
        elif(i.isupper()):
            upper+=1
        elif(i.islower()):
            lower+=1
    if(lower==0 or upper==0 or digit==0 or special==0):
        print('''Your Password should qualify following conditions: 
        At least 1 letter between [a-z] and 1 letter between [A-Z].
        At least 1 number between [0-9].
        At least 1 character from [$#@].
        Minimum length 6 characters.
        Maximum length 16 characters.''')
    else:
        print("Password is Valid")