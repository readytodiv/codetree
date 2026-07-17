nlist = []
for i in range(10):
    n = int(input())
    nlist.append(n)

t = [j for j in nlist if j%3==0]

f = [k for k in nlist if k%5==0]


print(len(t), len(f))