N = int(input())
_sum = 0

# Please write your code here.
def f(N) :
    global _sum
    if N <= 0 :
        print(_sum)
        return
    _sum += N
    f(N-2)

f(N)