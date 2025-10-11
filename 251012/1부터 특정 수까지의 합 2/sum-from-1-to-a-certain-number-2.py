N = int(input())

# Please write your code here.
_sum = 0

def func(N) :
    global _sum
    if N == 0:
        print(_sum)
        return
    _sum += N
    func(N-1)

func(N)