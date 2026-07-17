A, B = map(int,input().split())

result = [i for i in range(A, B+1) if i%2 ==0]
hap = 0
for k in result:
    hap += k
print(hap)