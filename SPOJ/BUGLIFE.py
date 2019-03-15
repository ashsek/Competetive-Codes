def dfs(u):
	global flag
	if flag == 1: return
	
	l = [u]
	while l:
		u = l.pop(0)
		if visited[u] == 1: return
		visited[u] = 1
		if color[u] == -1:
			color[u] = 0
			col = 0
		else:
			col = color[u]

		for i in range(len(E[u])):
			if color[E[u][i]] == -1:
				color[E[u][i]] = 1 if col == 0 else 0
			else:
				if color[E[u][i]] == col:
					flag = 1
					return
		for i in range(len(E[u])):
			if flag == 1:
				return
			if visited[E[u][i]] != 1:
				l.append(E[u][i])

for p in range(int(input())):
	flag = 0
	n,i = map(int,input().split())
	E = []
	visited = [0]*(n+1)
	color = [-1]*(n+1)

	for _ in range(n+1):
		E.append([])
	for j in range(i):
		x,y = map(int,input().split())
		E[x].append(y)
		E[y].append(x)
# need to color while doing dfs
	color[1] = 0
	for i in range(1,n+1):
		if flag == 1:
			break
		if visited[i] == 0:
			dfs(i)
	print('Scenario #{0}:'.format(p+1))
	if flag == 1:
		print('Suspicious bugs found!')
	else:
		print('No suspicious bugs found!')
