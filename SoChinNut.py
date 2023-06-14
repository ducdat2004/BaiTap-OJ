def tongCacChuSo(n):
    sum = 0
    for i in range(len(str(n))):
        st = str(n)
        sum += int(st[i])
    return sum
def tongCacChuSo2(n):
    sum = 0
    while n > 0:
        num = n % 10
        sum += num
        n //= 10
    return sum
def dem(n):
    count = 0
    for i in range(1, n + 1):
        if tongCacChuSo2(i) % 10 == 9:
            count += 1
    return count
n = int(input())
print(dem(n))