n, m = map(int, input().split())

# Please write your code here.

for i in range(min(n, m), 0, -1) :
    if n % i == 0 and m % i == 0 :
        gcd = i
        break

# lcm = max(n, m)
# while True :
#     if lcm % n == 0 and lcm % m == 0 :
#         print(lcm)
#         break
#     else :
#         lcm += gcd
print(n * m // gcd)