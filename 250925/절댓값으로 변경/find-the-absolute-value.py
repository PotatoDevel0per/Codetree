n = int(input())
arr = list(map(int, input().split()))

# Please write your code here.
for i in range(n) :
    print(f"{arr[i] if arr[i] > 0 else -1*arr[i]}", end=" ")