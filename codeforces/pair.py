import itertools
n,k = map(int,input().split())
a = map(int,input().split())

l = list(itertools.product(a, repeat=2))

l.sort()
print(*l[k-1])