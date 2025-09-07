n = int(input())
for _ in range(n) :
    s, e = map(int, input().split())
    ans = 0
    for i in range(s, e+1) :
        if i % 2 == 0 :
            ans += i
    print(ans)