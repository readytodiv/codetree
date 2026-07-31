start, end = map(int, input().split())

s = 0
l = 0
for i in range(start, end+1):
    for j in range(1, i+1):
        if i % j == 0:
            s += 1
    if s == 3:
        l += 1

    s = 0
print(l)