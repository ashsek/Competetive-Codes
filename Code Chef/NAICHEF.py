for i in range(int(input())):
	n,a,b = list(map(int,input().split()))
	x  = list(map(int,input().split()))
	x.sort()
	p = 0
	ya = 0
	yb = 0
	y = 0
	for k in x:
		if k == a:
			ya += 1
		if k == b:
			yb += 1
	p = (ya/n)*(yb/n)
	print(p)