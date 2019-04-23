import sys
sys.setrecursionlimit(1000000)

def st(n):
	global vert2
	if visited[n] == 1: return 0
	visited[n] = 1
	# vert2[n] = a[n]
	for i in range(len(V[n])):
		if visited2[V[n][i]] == -5:
			vert2[V[n][i]] == 0
			continue
		vert2[n] += st(V[n][i])

	return vert2[n]

def dfs(n):
	# global su
	if visited[n] == 1: return
	visited[n] = 1
	# su += a[n]
	# V[n].sort()
	vert2[n] = 0
	for i in range(len(V[n])):
		if pa == V[n][i]:
			continue
		else:
			dfs(V[n][i])

for _ in range(int(input())):
	n,x = list(map(int,input().split()))
	a = list(map(int,input().split()))
	a = [0]+a
	vert2 = a[:]
	# f = 0
	V = [[] for j in range(n+1)]
	for j in a:
		if j < 0:
			f = 1
	parent = [-1]*(n+1)
	for _ in range(n-1):
		a2,b = list(map(int,input().split()))
		V[a2].append(b)
		V[b].append(a2)
		parent[b] = a2
	visited=[0]*(n+1)
	visited2 = [0]*(n+1)
	st(1)
	k2 = min(vert2)
	# ind = vert2.index(k2)
	# print(vert2)
	k = 0

	while(k2 < -x):
		# k2 = min(vert2)
		# vert2 = a[:]
		ind = vert2.index(k2)
		visited2[ind] = -5
		pa = parent[ind]
		vert2 = a[:]
		visited=[0]*(n+1)
		st(1)
		visited=[0]*(n+1)
		dfs(ind)
		k2 = min(vert2)
		# print(k2)
		# print(vert2)
		k += 1
	print(vert2[1]-k*x)