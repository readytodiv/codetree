N = int(input())
hap = 0
for i in range(1, 101):
    
    hap = hap + i

    if hap >= N:
        print(i)
        break
    else:
        continue
