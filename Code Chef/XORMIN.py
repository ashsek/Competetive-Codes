def dfs2(u):
	global ma,unit,k
	if visited[u] == 1: return
	visited[u] = 1

	if w[u]^k >= ma:
		# print()
		if w[u]^k == ma:
			unit = min(u,unit)
		else:
			ma = w[u]^k
			unit = u
	for i in range(len(V[u])):
		if visited[V[u][i]] != 1:
			dfs2(V[u][i])


for _ in range(int(input())):
	n,q = list(map(int,input().split()))
	w = list(map(int,input().split()))
	w = [0]+w
	V  = []
	for p in range(n+1):
		V.append([])
	for o in range(n-1):
		x,y = list(map(int,input().split()))
		V[x].append(y)
		V[y].append(x)
	xl = 0
	vl = 0
	visited = [0]*(n+1)
	pa = [0]*(n+1)
	dfs2(1)
	visited = [0]*(n+1)
	for q1 in range(q):
		a,b = list(map(int,input().split()))
		v,k = a^vl,b^xl
		# print('-->',v,k)
		visited[pa[v]] = 1

		ma = -3219909
		unit = 999998
		dfs2(v)
		vl = unit
		xl = ma
		print(vl,xl)
		#update vl,xl
		visited = [0]*(n+1)
