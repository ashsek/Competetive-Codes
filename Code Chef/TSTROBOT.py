for _ in range(int(input())):
	n,x = list(map(int,input().split()))
	s = input()
	# mi = 999999999
	# ma = -99999999
	l = [x]
	for j in s:
		if j == 'L':
			x -= 1
			# mi = min(mi,x)
		if j == 'R':
			x += 1
		if x not in l:
			l.append(x)
		# print(j,l)
			# ma = max(ma,x)
	print(len(l))