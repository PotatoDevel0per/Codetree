n = int(input())
arr = list(map(int, input().split()))

# Please write your code here.
ans = 0

def f(n) :
    global ans
    if n == -1 :
        print(ans)
        return
    ans = arr[n] if ans < arr[n] else ans
    f(n-1)

f(n-1)