n = int(input())

mat = [[0 for _ in range(n)] for _ in range(n)]

for i in range(n) :
    for j in range(n) :
        mat[i][j] = j + 1
    if i % 2 == 1 :
        mat[i].reverse()

for i in range(n) :
    for j in range(n) :
        print(mat[i][j], end='')
    print()