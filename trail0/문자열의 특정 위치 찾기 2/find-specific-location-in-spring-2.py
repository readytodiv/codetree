flist = ["apple", "banana", "grape", "blueberry", "orange"]

s = input()
cnt =0

for i in flist:
    if i[2] == s or i[3] == s:
        print(i)
        cnt += 1
    else:
        continue

print(cnt)