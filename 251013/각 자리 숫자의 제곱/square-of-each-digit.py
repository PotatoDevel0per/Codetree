n = int(input())
_sum = 0

# Please write your code here.
def func(n) :
    global _sum
    if n == 0 :
        print(_sum)
        return
    _sum += (n%10)**2
    #print(n, n%10, _sum)
    func(n//10)

func(n)