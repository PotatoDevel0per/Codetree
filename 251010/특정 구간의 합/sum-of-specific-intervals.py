n, m = map(int, input().split())
arr = list(map(int, input().split()))
queries = [tuple(map(int, input().split())) for _ in range(m)]

# Please write your code here.

for i in range(m) :
    print(sum(arr[queries[i][0]-1:queries[i][1]]))