n = int(input())
nGiaiThua = 1
for i in range(1,n+1):
    nGiaiThua *= i
count = 0

for i in range(1,nGiaiThua+1, int(1e6)):
    if nGiaiThua % i == 0:
        count += 1
count %= 10**9 + 7
print(count)