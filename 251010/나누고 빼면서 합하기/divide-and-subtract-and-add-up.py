n, m = map(int, input().split())
A = list(map(int, input().split()))

# Please write your code here.
_sum = 0
while m != 1 :
    _sum += A[m]
    if m % 2 == 0 :
        m /= 2
    else :
        m -= 1
print(_sum)