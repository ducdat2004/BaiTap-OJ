def nGiaiThua(n):
    if n == 0:
        return 1
    else:
        return n * nGiaiThua(n - 1)
def demUocSo(n):
    cnt = 0
    for i in range(1, n+1):
        if n % i == 0:
            cnt += 1
    return cnt 
n = int(input())
n = nGiaiThua(n)
print(demUocSo(n))