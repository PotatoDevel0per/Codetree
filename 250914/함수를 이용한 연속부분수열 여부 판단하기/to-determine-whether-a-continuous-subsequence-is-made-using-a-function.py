n1, n2 = map(int, input().split())
a = list(map(int, input().split()))
b = list(map(int, input().split()))

# Please write your code here.
def check_CPS(a, b) :
    ck = True

    for i in range(n1) : 
        if a[i] == b[0] :
            if i + n2 - 1 >= n1 : 
                ck = False
                break
            for j in range(1, n2) :
                if a[i+j] != b[j] :
                    ck = False
                    break
        
    return ck

print(f"{'Yes' if check_CPS(a,b) else 'No'}")