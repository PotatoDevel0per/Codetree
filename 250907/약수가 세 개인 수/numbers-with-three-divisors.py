start, end = map(int, input().split())

# Please write your code here.
ans = 0
for i in range(start, end + 1) :
    cnt = 0
    for j in range(2, i) :
        if i % j == 0 :
            cnt += 1
            if cnt > 2 :
                break
    if cnt == 1 :
        ans += 1
print(ans)