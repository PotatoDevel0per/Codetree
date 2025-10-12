n = int(input())
cnt = 0

# Please write your code here.
def func(n) :
    global cnt
    if n == 1 :
        print(cnt)
        return
    cnt += 1
    if n % 2 == 0 :
        func(n//2)
    else :
        func(n//3)

func(n)