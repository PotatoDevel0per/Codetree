correct_num = 25
while True :
    num = int(input())
    if num == correct_num :
        print("Good")
        break
    elif num < 25 :
        print("Higher")
    else :
        print("Lower")