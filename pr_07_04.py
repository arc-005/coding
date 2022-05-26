# Write a program to calculate the factorial of a given number using for loop.
num = int(input("Enter the number :"))
factorial = 1
for i in range(1,num+1):
    factorial = factorial * i

print(f"The factorial of {num}  is {factorial}")


# For addition o numbers
# sum = 0
# for i in range(1,num+1):
#     sum = sum + i
    
# print(sum)