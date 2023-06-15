def kiemTraSo(n):
    if n.isdigit():
        return True
    elif n.isalpha():
        return False
def soNguoiViPham(n):
    if kiemTraSo(n):
        if int(n) < 18 and int(n) != 16:
            return True
    else:
        n = n.upper()
        lis = ["ABSINTH", "BEER", "BRANDY", "CHAMPAGNE", "GIN", "RUM", "SAKE", "TEQUILA", "VODKA", "WHISKEY", "WINE"]
        for i in lis:
            if n == i:
                return True
t = int(input())
cnt = 0
for i in range(t):
    n = str(input())
    if soNguoiViPham(n):
        cnt += 1
print(cnt)