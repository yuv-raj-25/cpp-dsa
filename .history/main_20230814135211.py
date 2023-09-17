def power(x, n):
    if n == 0:
        return 1
    
    temp = power(x, n/2);