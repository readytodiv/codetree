N = int(input())
sum = 0
for _ in range(N):
    a, b = map(int, input().split())
    for i in range(a, b+1):
        if i % 2 == 0:
            sum += i
        else:
            continue        
    print(sum)
    sum = 0