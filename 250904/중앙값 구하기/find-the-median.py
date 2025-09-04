arr = list(map(int, input().split()))
for j in range(0, len(arr)) :
    for i in range(0, len(arr)-1-j) :
        if arr[i] > arr[i+1] :
            tmp = arr[i]
            arr[i] = arr[i+1]
            arr[i+1] = tmp

print(arr[1])
