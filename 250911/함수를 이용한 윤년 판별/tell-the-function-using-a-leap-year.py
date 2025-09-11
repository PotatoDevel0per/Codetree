y = int(input())

# Please write your code here.
def check_leapYear(y) :
    return not (y % 4 != 0 or (y % 100 == 0 and y % 400 != 0))

print(f"{'true' if check_leapYear(y) else 'false'}") 