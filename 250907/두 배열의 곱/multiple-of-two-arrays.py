mat1 = [list(map(int, input().split())) for _ in range(3)]
mat2 = [list(map(int, input().split())) for _ in range(3)]
for i in range(3) :
    for j in range(3) :
        print(mat1[i][j] * mat2[i][j], end=' ')
    print()