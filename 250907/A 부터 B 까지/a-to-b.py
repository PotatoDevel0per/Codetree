a, b = map(int, input().split())
num = a

while num <= b :
    print(num, end=' ')
    if num % 2 == 1 :
        num *= 2
    else :
        num += 3