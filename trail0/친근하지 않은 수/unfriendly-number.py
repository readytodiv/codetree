N = int(input())
count = 0
for i in range(1, N+1):
    if i % 2==0 or i % 3==0 or i%5==0 :
        count +=1
        continue
    else:
        continue

print(N-count)

