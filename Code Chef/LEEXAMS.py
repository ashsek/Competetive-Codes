def solve(i , used , prob):
    if i == n:
        return prob
    ans = 0.0
    for (l,pp) in [(a[i],p[i]) , (b[i] , 100-p[i])]:
        if used[l-1] == True:
            continue
        used[l-1] = True
        ans += solve(i+1 , used , prob*pp/100)
        used[l-1] = False
    return ans
cases = int(input())
while cases:
    cases -= 1
    a = []
    p = []
    b = []
    n = int(input())
    for i in range(n):
        a1,a2,a3 = map(int , input().split())
        p.append(a1)
        a.append(a2)
        b.append(a3)
    if n> 16:
        print(0)
        continue
    lab = [False]*16
    print(solve(0, lab,1.00))