def factors(n):
    return len([f for f in range(1,n+1) if n%f==0])

t = int(input())
for i in range(t):
    n = int(input())
    a = list(map(int,input().split(' ')))
    prod = 1
    for x in a:
        prod = prod*x
    print(factors(prod))        