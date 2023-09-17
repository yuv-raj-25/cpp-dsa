def power(x, n):
    if n == 0:
        return 1
    elif n % 2 == 0:
        temp = power(x, n // 2)
        return temp * temp
    else:
        temp = power(x, (n - 1) // 2)
        return x * temp * temp

base = int(input("Enter the base: "))
exponent = int(input("Enter the exponent: "))
result = power(base, exponent)
print(f"{base} raised to the power of {exponent} is: {result}")
