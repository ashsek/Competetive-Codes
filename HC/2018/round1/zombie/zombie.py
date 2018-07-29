# for every ith i >= 1 land we have i-1th as the left one and ith as the right one

for t in range(int(input())):
	n,m = list(map(int,input().split()))
	ab = []
	h = []
	aff_land = []
	result = 1
	saf_land = []
	#all lands
	for i in range(n):
		saf_land.append(i)
	#heights of fences
	for _ in range(n-1):
		ab.append(list(map(int,input().split())))
	#zombies with thier heights 
	for _ in range(m):
		l = list(map(int,input().split()))
		l[0] = l[0] - 1
		aff_land.append(l[0])
		h.append(l)
	h.sort()
	aff_land.sort()
	#removing affected lands from all lands
	for k in aff_land:
		saf_land.remove(k)

	#real fucking work starts here
	for land in saf_land:
		if land >= 1:
			left_wall = ab[land-1]
		else:
			right_wall = ab[land]
		

	print('m',m,'n',n,'ab',ab)
	print('h',h)
	print("Case #{0}: {1}".format(t+1,result))

