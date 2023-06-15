import time


def luckynumber(n):
    if n % 2 != 0:
        n *= 10

    while True:
        l = str(n)
        for i in range(len(l)):
            if int(l[i]) < 4:
                l = l.replace(l[i], '4')
            elif int(l[i]) > 4 and int(l[i]) < 7:
                l = l.replace(l[i], '7')
        n = int(l)
        s = n
        check = True
        while s > 0:
            num = s % 10
            s //= 10
            if num != 4 and num != 7:
                check = False
                break 
        num4 = str(n).count('4')
        num7 = str(n).count('7')
        if num4 == num7 and (num4 != 0 and num7 != 0) and check == True:
            return n
        n += 1


t = int(input())
test_cases = []
for _ in range(t):
    n = int(input())
    test_cases.append(n)

start_time = time.perf_counter()

for n in test_cases:
    result = luckynumber(n)
    print(result)

end_time = time.perf_counter()
execution_time = end_time - start_time
print("Thời gian chạy:", execution_time, "giây")
