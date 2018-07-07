k=int(input())
blank=input()
for i in range(k): 
    s=int(input())
    t=0
    for j in range(s):
        t+=int(input())
    if t%s==0:
        print("YES")
    else:
        print("NO")
    if i+1==k:
        break
    else:
        blank=input()