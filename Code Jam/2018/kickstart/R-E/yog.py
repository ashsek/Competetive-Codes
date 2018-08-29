for u in range(int(input())):
    n,k = list(map(int,input().split()))
    a = list(map(int,input().split()))
    y = 0
    o = k
    a.sort()
    while(True):
        for i in range(n):
            if a[i] > 0 and k>0:   
                k -= 1
                y += 1
                a[i]=0
            a[i]-=1
        k = o 
        if max(a) <= 0:
            break
    print("Case #{0}: {1}".format(u+1,y))

