import time


def superLucky(n):
    k = n
    while True:
        dem4 = 0
        dem7 = 0
        check = True 
        l = str(k)
        for i in range(len(str(k))):
            if int(l[i]) < 4:
                l = l.replace(l[i], '4')
            elif int(l[i]) > 4 and int(l[i]) < 7:
                l = l.replace(l[i], '7')
        k = int(l) 
        j = k
        while j > 0:
            digit = j % 10
            if digit != 4 and digit != 7:
                check = False
                break
            elif digit == 4:
                dem4 += 1
            elif digit == 7:
                dem7 += 1
            j //= 10
        if (dem4 == dem7 and (dem4 != 0 and dem7 != 0)) and check == True:
            return k
        k +=1
t = int(input())
for i in range(t):
    n = int(input())
    if len(str(n)) % 2 != 0:
        n *= 10
    print(superLucky(n))
start_time = time.perf_counter()

# Đoạn code bạn muốn kiểm tra thời gian chạy của nó

end_time = time.perf_counter()
execution_time = end_time - start_time

print("Thời gian chạy:", execution_time, "giây")