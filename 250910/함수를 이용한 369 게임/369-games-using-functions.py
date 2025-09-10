a, b = map(int, input().split())

def contains_369(n):
    return any(c in '369' for c in str(n))

count = sum(1 for i in range(a, b + 1) if i % 3 == 0 or contains_369(i))

print(count)