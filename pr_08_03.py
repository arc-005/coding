# Write a recursive function to calculate the sum of n natural numbers.

def add(n):
    if n <= 1:
        return 1
    return n + add(n-1)

print(add(5))