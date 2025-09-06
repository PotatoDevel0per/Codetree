ch = input()
str_list = ["apple", "banana", "grape", "blueberry", "orange"]
cnt = 0
for s in str_list :
    if ch == s[2:3] or ch == s[3:4] :
        print(s)
        cnt += 1
print(cnt)