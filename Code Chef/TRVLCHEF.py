def dfs(u):
	if visited[u] == 1: return
	visited[u] = 1
	for j in range(1,n+1):
		if j != u:
			if abs(c[u-1] - c[j-1]) <= d and visited[j] != 1:
				dfs(j)

for _ in range(int(input())):
	n,d = list(map(int,input().split()))
	c = list(map(int,input().split()))
	o = c[0]
	c.sort(reverse = True)
	c.remove(o)
	c2 = c[:]
	c2.sort()
	c2 = [o]+ c2 
	c = [o] + c
	# print(c)
	f = 1
	k = n
	f2 = 1
	while(c):
		if k > 2:
			if(abs(c[0]-c[1]) <= d):
				c.pop(0)
				k -= 1
			else:
				f = 0
				break
		else:
			if(abs(c[0]-c[1]) <= d):
				c.pop(0)
				c.pop(0)
				k -= 2
			else:
				f = 0
				break
	k = n
	while(c2):
		if k > 2:
			if(abs(c2[1]-c2[0]) <= d):
				c2.pop(0)
				k -= 1
			else:
				f2 = 0
				break
		else:
			if(abs(c2[1]-c2[0]) <= d):
				c2.pop(0)
				c2.pop(0)
				k -= 2
			else:
				f2 = 0
				break

	# visited = [-1]*(n+1)
	# node = [[] for j in range(n+1)]
	# dfs(1)
	# f = 1
	# for i in range(1,n+1):
	# 	if visited[i] == -1:
	# 		f = 0
	# 		break
	if f == 0 and f2 == 0:
		print("NO")
	else:
		print("YES")
