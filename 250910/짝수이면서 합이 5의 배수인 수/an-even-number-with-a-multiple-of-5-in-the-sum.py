n = int(input())

# Please write your code here.
print(f"{'Yes' if n % 2 == 0 and (n//10 + n%10)%5 == 0 else 'No'}")