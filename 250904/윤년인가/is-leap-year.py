year = int(input())
print(f"{'false' if (year % 4 != 0 or (year % 100 == 0 and year % 400 != 0)) else 'true'}")