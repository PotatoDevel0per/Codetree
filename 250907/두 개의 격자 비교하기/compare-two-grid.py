n, m = map(int, input().split())
mat1 = [list(map(int, input().split())) for _ in range(n)]
mat2 = [list(map(int, input().split())) for _ in range(n)]
for i in range(n) :
    for j in range(m) :
        print(int(mat1[i][j] != mat2[i][j]), end=' ')
    print()