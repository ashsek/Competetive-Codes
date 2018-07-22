for t in range(int(input())):
	n,m = list(map(int,input().split()))
	ab = []
	h = []
	result = 0
	for i in range(n-1):
		ab.append(list(map(int,input().split())))
	for i in range(m):
		h.append(list(map(int,input().split())))

	print("Case #{0}: {1}".format(t+1,result))

