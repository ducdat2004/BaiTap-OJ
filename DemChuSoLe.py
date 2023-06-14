def dem(n):
    count = 0
    
    while n > 0:
        a = n % 10
        if a % 2 != 0:
            count += 1
        n //= 10
    return count
n = int(input())
if n < 0:
    n *= -1
print(dem(n))