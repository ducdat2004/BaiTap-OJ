sopt = int(input())
t = map(int, input().split())
a = [0, 3, 6, 9, 11, 14, 17]
dem = 0
for i in t:
    if i % 19 in a:
        dem += 1
print(dem)