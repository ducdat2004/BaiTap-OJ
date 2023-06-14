def hehe(year):
    if (year % 4 == 0 and year % 100 != 0) or (year % 400 == 0 and year % 100 == 0):
        return True
    else:
        return False
t = int(input())
for i in range(t):
    n = int(input())
    if hehe(n):
        print("leap year")
    else:
        print("none")