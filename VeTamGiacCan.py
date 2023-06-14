def veTamGiac(n):
    j = "*"
    s = ""
    soCanh = (n * 2 - 1)
    lap1 = soCanh // 2 + 1
    for i in range(lap1):
        s += j
        s += '\n'
        j +="*"
    k = ""
    for i in range(len(j) - 2):
        k+="*"
    for i in range(soCanh - lap1):
        s += k
        s += '\n'
        n = ""
        for p in range(len(k) - 1):
            n += "*"
        k = n
    return s
t = int(input())
result = ""
for i in range(t):
    n = int(input())
    if n < 0:
        n *= -1
    result += veTamGiac(n)
print(result)