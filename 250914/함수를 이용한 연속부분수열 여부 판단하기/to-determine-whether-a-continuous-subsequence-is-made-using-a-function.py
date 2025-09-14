n1, n2 = map(int, input().split())
a = list(map(int, input().split()))
b = list(map(int, input().split()))

# Please write your code here.
def check_CPS(a, b) :
    str_a = ''.join(str(n) for n in a)
    str_b = ''.join(str(n) for n in b)

    ck = True
    
    for i in range(len(str_a)) :
        if str_a[i] == str_b[0] : 
            for j in range(1, len(str_b)) :
                if str_a[i + j] != str_b[j] : 
                    ck = False
    return ck

print(f"{'Yes' if check_CPS(a,b) else 'No'}")