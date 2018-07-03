while True:
	try:
		j = int(input())
		if j == -1: break
		l = []
		for _ in range(j):
			l.append(int(input()))
		#print(l)
		s = sum(l)
		if s % j != 0:
			print(-1)
		else:
			y = s//j
			q = 0
			for o in l:
				if o < y:
					q += y-o
			print(q)

	except:
		pass
