n = int(input())
for i in range(1, n+1) :
    for j in range(1, n) :
        print("{} * {} = {},".format(i, j, i*j), end=' ')
    print("{} * {} = {}".format(i, n, i * n))