# Write a program to print the multiplication table of a given numbers using for loop.

num =int(input("Enter the number: \n"))

for i in range(1,11):
    # print(str(num) + " x " + str(i) +" = " + str(i*num))
    print(f"{num} x {i} = {num*i}")


# n1 = int(input("number daal isme : "))
# i = 1
# while i <= 10:
#     print(f"{n1} x {i} = {n1*i}")
#     i = i+1