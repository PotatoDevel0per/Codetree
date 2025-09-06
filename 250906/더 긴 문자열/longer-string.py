s1, s2 = input().split()
if len(s1) == len(s2) :
    print("same")
elif len(s1) > len(s2) :
    print(s1, len(s1))
else :
    print(s2, len(s2))