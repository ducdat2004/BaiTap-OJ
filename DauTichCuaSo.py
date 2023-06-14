a = int(input())
b = int(input())
j = 1
tich = 1
while a + j < b:
    tich = tich * (a + j)
    j+=1
kq = a * tich * b
if kq > 0:
    print("Positive")
elif kq < 0:
    print("Negative")
else:
    print("Zero")