def gcd(a,b):
	if (b == 0):
		return a
	else:
		return gcd (b, a % b)


def solve(u):
	if visited[u] == 1: return
	visited[u] = 1
	v2[u] = gcd(v2[u],v2[pa[u]])
	if len(V[u]) == 1:
		if u!=1:
			l2.append(u)
	for i in range(len(V[u])):
		if visited[V[u][i]] != 1:
			pa[V[u][i]] = u
			solve(V[u][i])

for _ in range(int(input())):
	n = int(input())
	V = [[] for j in range(n+1)]
	for _ in range(n-1):
		a,b = list(map(int,input().split()))
		V[a].append(b)
		V[b].append(a)
	values = list(map(int,input().split()))
	m = list(map(int,input().split()))
	values = [0] + values
	m = [0] + m
	visited = [0]*(n+1)
	pa = [0]*(n+1)
	l2 = []
	pa[1] = 1
	values2 = values[:]
	solve(1)
	l2.sort()
	for j in l2:
		mo = m[j]
		z = gcd(mo,v2[j])
		print(mo - z,end=' ')
	print()
