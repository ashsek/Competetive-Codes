def sue():
	global su
	su = 0
	for i in range(n):
		su += c[i]
		c[i] = c[i]//2
	# return su
	# pass
for _ in range(int(input())):
	n,a,b,x,y,z = list(map(int,input().split()))
	c = list(map(int,input().split()))

	d1 = (z-a)//x
	d2 = (z-b)//y
	if d1<d2:
		print(0)
	if d1 == d2:
		if max(c) <= 0:
			print('RIP')
		else:
			print(1)
	if d1 > d2:
		surplus = z - (a + x*d2)
		print(surplus)
		count = 0
		f = 0
		su = sum(c)
		if surplus  > 2*su:
			print('RIP')
			continue
		while(surplus>0):
			print('sur',surplus)
			print('cou',count)
			print('su',su)
			if surplus >= su and su > 0:
				surplus -= su
				count += n
				su = su//2
				# sue()
			else:
				k = max(c)
				if k <= 0:
					f = 1
					break
				surplus -= k
				c[c.index(k)] = c[c.index(k)]//2
				count += 1
		if f:
			print('RIP')
		else:
			print(count)
