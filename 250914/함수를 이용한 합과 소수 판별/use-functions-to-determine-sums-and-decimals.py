a, b = map(int, input().split())

# Please write your code here.
def check_prime(n) :
    ck = True
    for i in range(2, n) :
        if n % i == 0 :
            ck = False
            break
    return ck

def check_even(n) :
    n_str = str(n)
    _sum = 0
    for ch in n_str :
        _sum += int(ch)
    return _sum % 2 == 0

cnt = 0

for i in range(a, b+1) :
    if check_prime(i) and check_even(i) :
        cnt += 1

print(cnt)