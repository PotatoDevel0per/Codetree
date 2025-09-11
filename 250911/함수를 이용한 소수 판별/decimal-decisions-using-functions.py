a, b = map(int, input().split())

# Please write your code here.
def prime_check(n) :
    isPrime = True
    for i in range(2, n) :
        if n % i == 0 :
            isPrime = False
    return isPrime

_sum = 0
for i in range(a, b+1) :
    if prime_check(i) :
        _sum += i

print(_sum)