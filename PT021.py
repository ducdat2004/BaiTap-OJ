def tongCacChuSo2(n):
    sum = 0
    
    while n > 0:
        num = n % 10
        if num % 2 == 0:
            sum += num
        n //= 10
    return sum
t = int(input())
for i in range(t):
    n = int(input())
    kq = tongCacChuSo2(n)
    print(kq)