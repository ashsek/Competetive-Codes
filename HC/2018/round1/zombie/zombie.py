for t in range(int(input())):
	n,m = list(map(int,input().split()))
	ab = []
	h = []
	aff_land = []
	result = 0
	for i in range(n-1):
		ab.append(list(map(int,input().split())))
	for i in range(m):
		l = list(map(int,input().split()))
		aff_land.append(l[0])
		h.append(l)
	print('m',m,'n',n,'ab',ab)
	print('h',h)
	print("Case #{0}: {1}".format(t+1,result))

