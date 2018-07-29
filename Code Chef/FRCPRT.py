def applyforce(g,f):
	global grid
#	print('grid',grid)
	if f == 'L':
		# for k in g:
		# 	for i in range(len(k)-1):
		# 		if k[i] == 1:
		# 			if k[i+1] != 1:
		# 				k[i] = 0
		# 				k[i+1] = 1
		for k in g:
			k.sort(reverse = True)
	if f == 'R':
		for k in g:
			# for i in reversed(range(1,len(k))):
			# 	if k[i] == 1:
			# 		if k[i-1] != 1:
			# 			k[i] = 0
			# 			k[i-1] = 1
			k.sort()

	if f == 'U':
		# for i in reversed(range(1,len(g))):
		# 	for j in range(len(g[i])-1):
		# 		if g[i][j] == 1:
		# 			if g[i-1][j] == 0:
		# 				g[i-1][j] = 1
		# 				g[i][j] = 0
		l2 = []
		for i in range(len(g[0])):
			for j in range(len(g)):
				l2.append(g[j][i])
			l2.sort(reverse = True)
			for j in range(len(g)):
				g[j][i] = l2[j] 
			l2 = []


	if f == 'D':
		# for i in range(len(g)-1):
		# 	for j in range(len(g[i])-1):
		# 		if g[i][j] == 1:
		# 			if g[i+1][j] == 0:
		# 				g[i+1][j] = 1
		# 				g[i][j] = 0
		l2 = []
		for i in range(len(g[0])):
			for j in range(len(g)):
				l2.append(g[j][i])
			l2.sort()
			for j in range(len(g)):
				g[j][i] = l2[j] 
			l2 = []
			#print('IN D',g)
	grid = g
for _ in range(int(input())):
	n,m = list(map(int,input().split()))
	grid = []
	for _ in range(n):
		l = []
		l2 = []
		l = list(input())
		for k in l:
			l2.append(int(k))
		grid.append(l2)
	force = input()
	for k in force:
		applyforce(grid,k)
	for k in grid:
		s = ''
		for l in k:
			s+=str(l)
		print(s)

		