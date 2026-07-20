A, B = map(int, input().split())

n = A
while n <=B:
    
    if n % 2 ==0 :
        print(n, end= " ")
        n += 3
    else:
        print(n, end=" ")
        n *= 2
