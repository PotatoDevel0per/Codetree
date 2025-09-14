n1, n2 = map(int, input().split())
a = list(map(int, input().split()))
b = list(map(int, input().split()))

def check_CPS(a, b):
    for i in range(n1 - n2 + 1):
        if a[i:i+n2] == b:
            return True 
    return False

print(f"{'Yes' if check_CPS(a,b) else 'No'}")