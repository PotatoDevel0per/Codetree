M, D = map(int, input().split())

# Please write your code here.
def check_day(M, D) :
    if M == 2 :
        return D < 29
    elif M in [1, 3, 5, 7, 8, 10, 12] :
        return D < 32
    else :
        return D < 31

print(f"{'Yes' if check_day(M,D) else 'No'}")