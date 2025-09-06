n = int(input())
_sum = 0
for i in range(101) :
    _sum += i
    if _sum >= n :
        print(i)
        break
