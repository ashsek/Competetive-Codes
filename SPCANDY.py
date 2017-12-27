j = list(map(int,input().split()))
k = int(j[0])
for i in range(k):
    a,b=map(int,input().split()) 
    if b == 0:
        print(0,a)
        continue
    y = a//b
    tc = y*b
    teacher = a - tc
    print(y,teacher)