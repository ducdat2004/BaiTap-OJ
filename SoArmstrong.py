
def armstrong(i):
    length = len(str(i))
    tong = 0
    a = i
    while a > 0:
        s = a % 10
        a //= 10
        s = s ** length
        tong += s
    if tong == i:
        return True
        
n = int(input())
dem = 0    
i = 0
while dem <= n - 1:
    if armstrong(i):
        print(i, end=' ')
        dem+=1
    i+=1