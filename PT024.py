n = int(input())
s = ""
while n > 0:
    a = n // 2
    if n % 2 != 0:
        s += '1'
    else:
        s += '0'
    n //= 2
for i in range(len(s) - 1, -1, -1):
    print(s[i], end='')