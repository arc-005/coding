def factorial_iter(n):
    product = 1
    for i in range(n):
        product = product * (i+1)
    return product

def factorial_recursive(n):
    if n ==1 or n == 0:
        return 1
    return n * factorial_iter(n-1)

print(factorial_iter(6))
print(factorial_recursive(0))