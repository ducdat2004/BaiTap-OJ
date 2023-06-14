def check(n, a, b):
    s = 0
    for i in range(len(str(n))):
        z = ""
        z = str(n)
        s += int(z[i])
    if s >= a and s <= b:
        return True
    else:
        return False
n = int(input())
k = list(map(int, input().split()))
tong = 0
for i in k:
    a = i
    break
for p in k:
    b = p
for i in range(1, n+1):
    if check(i, a, b):
        tong += i
print(tong)