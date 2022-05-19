# write a program to accept marks of 6 students and display them in a sorted manner.
m1 = int(input("Enter Marks For Student number 1: \n"))
m2 = int(input("Enter Marks For Student number 2: \n"))
m3 = int(input("Enter Marks For Student number 3: \n"))
m4 = int(input("Enter Marks For Student number 4: \n"))
m5 = int(input("Enter Marks For Student number 5: \n"))
m6 = int(input("Enter Marks For Student number 6: \n"))

myList = [m1,m2,m3,m4,m5,m6]
myList.sort()
print(myList)