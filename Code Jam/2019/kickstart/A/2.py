#brute force,

for k in range(int(input())):
	n,g,m = list(map(int,input().split()))
	st = []
	di = []

	re = [] #how many remember
	for i in range(n+1):
		re.append([])

	m_min = []
	for _ in range(g):
		a,b = input().split()
		st.append(int(a))
		if b == 'C':
			di.append(1) 
		else:
			di.append(-1)
			
	pos = st[:]
	for j in range(g):
		re[pos[j]].append((j,0,))

	for i in range(1,m+1):
		for j in range(g):
			if di[j] == 1:
				# pos[j] = (pos[j]+1)%n
				if pos[j] + 1 == n:
					pos[j] = n
				else:
					pos[j] = (pos[j]+1)%n
			else:
				if pos[j] - 1 > 0:
					pos[j] = pos[j]-1
				elif pos[j] - 1 == 0:
					pos[j] = n
				else:
					pos[j] = (pos[j]-1)%n

			if len(re[pos[j]]) > 0:
				if re[pos[j]][0][1] == i:
					re[pos[j]].append((j,i,))
				else:
					re[pos[j]] = []
					re[pos[j]].append((j,i,))
			else:
				re[pos[j]].append((j,i,))

	# print(re)
	l = [0]*g
	for u in re:
		for o in u:
			l[o[0]] += 1
	print("Case #{}:".format(k+1), *l)
	# print(l)

	# #pos after m min
	# for i in range(g):
	# 	if di[i] == 1:
	# 		m_min.append((st[i]+m)%n)
	# 	else:
	# 		if (st[i]-m)%n != 0:
	# 			m_min.append((st[i]-m)%n)
	# 		else:
	# 			m_min.append(n)
	# print(m_min)