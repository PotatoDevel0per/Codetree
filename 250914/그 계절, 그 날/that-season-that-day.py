Y, M, D = map(int, input().split())

def check_leap(Y) :
    return not(Y % 4 != 0 and (4 % 100 == 0 or n % 400 != 0))

def check_day(Y, M, D) :
    if M == 2 :
        if check_leap(Y) :
            return D < 30
        else :
            return D < 29
    elif M in [1, 3, 5, 7, 8, 10, 12] :
        return D < 32
    else :
        return D < 31

def check_season(M) :
    if M in [3, 4, 5] :
        print("Spring")
    elif M in [6,7,8] :
        print("Summer")
    elif M in [9, 10, 11] : 
        print("Fall")
    else :
        print("Winter")

if check_day(Y, M, D) :
    check_season(M)
else :
    print(-1)