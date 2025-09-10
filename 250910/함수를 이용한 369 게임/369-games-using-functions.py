a, b = map(int, input().split())

# Please write your code here.
def check_369(n) :
    n_str = str(n)
    for i in range (len(n_str)) :
        if n_str[i] == '3' or n_str[i] == '6' or n_str[i] == '9' :
            return 1
    return 0

cnt = 0
for i in range(a, b+1) :
    if i % 3 == 0 or check_369(i) :
        cnt += 1
print(cnt)