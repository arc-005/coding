# Write a program to greet all the person names stored in a list l1 and which start with s l1 = ["harry","sohan","sachin","rahul"]

l1= ["Harry","Sohan","Sachin","Rahul"]
for name in l1:
    if name.startswith("S"):
        print("Hello " + name)