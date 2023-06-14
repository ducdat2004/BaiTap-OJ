def ve_tam_giac_can(canh):
    for i in range(canh):
        for j in range(i + 1):
            print("*", end="")
        print()
        
    for i in range(canh - 1, 0, -1):
        for j in range(i):
            print("*", end="")
        print()
t = int(input())
result = ""
for _ in range(t):
    n = int(input())
    ve_tam_giac_can(n)