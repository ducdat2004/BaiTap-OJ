T = int(input())

def tamGiacFloyd(n):
    for i in range(1,n+1):
        tmp = i % 2
        for j in range(1,i+1):
            print(tmp, end = "")
            tmp = 1 - tmp
        print()

def tamGiacFloyd2(n):
    t = ""
    for i in range(n):
        if i % 2 != 0: 
            t = "0" + t
        else:
            t = "1" + t
        print(t)

tamGiacFloyd2(T)