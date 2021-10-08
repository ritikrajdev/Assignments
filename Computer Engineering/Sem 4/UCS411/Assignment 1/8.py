class Restaurant:
    def __init__(self):
        self.r_name = "Pnaky's Restaurant"
        self.c_type = "Vegetarian cuisine"

    def describe_restaurant(self):
        print(self.r_name)
        print(self.c_type)

    def open_restaurant(self):
        print("Welcome, Restautant is open!")


# r_name = input("Enter restaurant name:")
# c_type = input("Enter cuisine type:")

restaurant = Restaurant()
print(restaurant.r_name)
print(restaurant.c_type)
restaurant.describe_restaurant()
restaurant.open_restaurant()
