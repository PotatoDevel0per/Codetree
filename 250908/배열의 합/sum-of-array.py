mat = [list(map(int, input().split())) for _ in range(4)]
for i in range(4) :
    total = 0
    for j in range(4) :
        total += mat[i][j]
    print(total)