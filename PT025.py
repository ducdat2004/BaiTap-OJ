import math
def tong(lis):
    s = 0
    for i in range(len(lis)):
        for j in range(i + 1,len(lis)):
            point1 = lis[i]
            point2 = lis[j]
            kc = math.sqrt((point2[0]-point1[0])**2 + (point2[1]-point1[1])**2)**2
            s += kc
    return int(s)
t = int(input())
lis = []
for i in range(t):
    x, y = map(int, input().split())
    lis.append((x, y))
print(tong(lis))