import sys
sys.setrecursionlimit(122500)
def dfs(u):
	global s
	if visited[u] == 1: return
	visited[u] = 1
	s += 1
	for i in range(len(E[u])):
		if visited[E[u][i]] != 1:
			dfs(E[u][i])

for _ in range(int(input())):
	E = []
	n,m = map(int,input().split())
	visited = [0]*(n+1)
	for p in range(n+1):
		E.append([])

	for z in range(m):
		i,j = list(map(int,input().split()))
		E[i].append(j)
		E[j].append(i)
	cc = 0
	v= []
	for u in range(1,n+1):
		s = 0
		if visited[u] == 0:
			dfs(u)
			cc += 1
			v.append(s)
	pr = 1
	for j in v:
		pr*=j
	print(cc, pr%(10**9 + 7))