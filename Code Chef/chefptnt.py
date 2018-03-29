# n patients M months , k workers, x max per month
for j in range(int(input())):
    n,m,x,k = list(map(int,input().split()))
    s = input()
    p = 0 #TRACKING ODD MONTHS
    i = 1 #even months
    y = True
    l = [0]*m #ading patients to months
    o = 0 # odd/even tracker m = 6
    
    while n:
        if s[o] == 'O':
            if l[p] < x:
                l[p] += 1
                k-=1
                n-=1
            else:
                if p + 2 <= m-1:
                    p += 2
                    l[p] +=1
                    k-=1
                    n-=1
                else:
                    y = False
                    break
                
        if s[o] == 'E':
            if len(l) < 2:
                y = False
                break
            if l[i] < x:
                l[i] += 1
                k-=1
                n-=1
            else:
                if i+2 <= m-1:
                    i += 2
                    l[i] += 1
                    k -=1
                    n-=1
                else:
                    y = False
                    break
        if o < int(len(s))-1:
            o += 1
    if y:
        print('yes')
    else:
        print('no')
            
