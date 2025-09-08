n = int(input())

mat = [[0 for _ in range(n)] for _ in range(n)]

for i in range(n) :
    for j in range(n) :
        if i % 2 == 1 :
            mat[j][i] = n - j
        else : 
            mat[j][i] = j + 1

for i in range(n) :
    for j in range(n) :
        print(mat[i][j], end='')
    print()