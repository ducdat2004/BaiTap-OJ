
def checkSoNT(n):
    if n < 2:
        return False
    count = 0
    for i in range(1, n+1):
        if n % i == 0:
            count += 1
    if count == 2:
        return True
def giaThiet(n):
    count = 0
    for i in range(2, n+1):
            for j in range(2, n):
                if checkSoNT(j):
                    for o in range(j+1, n+1):
                        tong = 0
                        if checkSoNT(o):
                            tong = j + o + 1
                            dem = 0
                            for l in range(j+1, o):
                                if checkSoNT(l):
                                    dem+=1
                            if tong == i and dem == 0 and checkSoNT(tong):    
                                count +=1
                                #print(j, "+", o, "=", tong, "i =", i)
    return count
t = int(input())
for i in range(t):
    n = int(input())
    k = int(input())
    if giaThiet(n) >= k:
        print("YES")
    else:
        print("NO")    