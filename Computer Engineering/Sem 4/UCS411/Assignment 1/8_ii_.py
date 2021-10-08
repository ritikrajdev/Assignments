class User:
    def __init__(self, f_name, l_name, add, mob):
        self.f_name = f_name
        self.l_name = l_name
        self.add = add
        self.mob = mob

    def describe_user(self):
        print("User First Name:", self.f_name)
        print("User Last ame:", self.l_name)
        print("User Address:", self.add)
        print("User Mobile:", self.mob)

    def greet_user(self):
        print("Hello, Welcome To The World of Python")


a = User("Kanhaiya", "Bhayana", "Haridwar", 6778892321)
a.describe_user()
print()
b = User("Arnav", "Singh", "Dehradun", 8967543678)
b.describe_user()
