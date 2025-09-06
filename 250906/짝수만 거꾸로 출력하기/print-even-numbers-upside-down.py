n = int(input())
input_list = list(map(int, input().split()))
arr = []

for i in range(n) :
    if input_list[i] % 2 == 0 :
        arr.append(input_list[i])

for i in range(len(arr)-1, -1, -1) :
    print(arr[i], end=' ')