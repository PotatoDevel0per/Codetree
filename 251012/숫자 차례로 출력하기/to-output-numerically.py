n = int(input())

# Please write your code here. 
        
def recursive_func1(n=0) :
    if n == 0 :
        return
    
    recursive_func1(n-1)
    print(n, end=' ')


def recursive_func2(n=0) :
    if n == 0 :
        return
    
    print(n, end=' ')
    recursive_func2(n-1)

recursive_func1(n)
print()
recursive_func2(n)