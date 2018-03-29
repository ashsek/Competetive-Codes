def D(l,d,s,c):
#    if D(l,d,s,c) >= l:
#        return l
    if d==1:
       return s
    elif d==2:
        return s + s*c
    else:
        m=s+(s*c)
        for j in range(3,d+1):
            m=m+(m*c)
            if m>=l:
                break
        return m
    
for m in range(int(input())):
    l,d,s,c = map(int,input().split()) 
    if D(l,d,s,c) >= l:
        print("ALIVE AND KICKING")
    else:
        print("DEAD AND ROTTING")