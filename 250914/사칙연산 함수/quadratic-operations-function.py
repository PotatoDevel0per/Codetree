a, o, c = input().split()
a = int(a)
c = int(c)

# Please write your code here.
def add(a, c) :
    return a + c

def sub(a, c) :
    return a - c

def multiple(a, c) :
    return a * c

def devide(a, c) :
    return a // c

if o == '+' :
    print("{} {} {} = {}".format(a, o, c, add(a,c)))
elif o == '-' :
    print("{} {} {} = {}".format(a, o, c, sub(a,c)))
elif o == '*' :
    print("{} {} {} = {}".format(a, o, c, multiple(a,c)))
elif o == '/' :
    print("{} {} {} = {}".format(a, o, c, devide(a,c)))
else :
    print("False")