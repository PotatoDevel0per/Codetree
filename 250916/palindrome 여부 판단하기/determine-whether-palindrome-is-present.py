A = input()

# Please write your code here.
def check_palindrome(s) :
    max_len = len(s)
    for i in range(0, max_len // 2) :
        if s[i] != s[max_len - i - 1] :
            return False
    return True

print(f"{'Yes' if check_palindrome(A) else 'No'}")