def calculatediff(k,q):
    s= 0
    for i in range(min(len(k),len(q))):
        if k[i] != q[i]:
            s += 1
    return s
d = {}
for t2 in range(int(input())):
    n,m,p = list(map(int,input().split()))
    l2 = []
    s = []
    f = []
    ans= []
    for i in range(n):
        s.append(input())
    for i in range(m):
        f.append(input())
    bi = len(s[0])
    l = [bin(x)[2:].rjust(bi, '0') for x in range(2**bi)]
    for j in l:
        if j not in f:
            l2.append(j)
    for k in l2:
        t = 0
        for q in s:
            t+=calculatediff(k,q)
        ans.append(t)
  #  print(s)
   # print("---=-=-==-=-=-")
  #  print(l)
    #print("---------")
  #  print(f)
    #print("*****")
  #  print(ans)
    u = min(ans)
    #print(u)
    #y: minimum complaints for shakti
    print("Case #{0}: {1}".format(t2+1,u))
