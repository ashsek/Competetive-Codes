for _ in range(int(input())):
	n,m = list(map(int,input().split()))
	a = list(map(int,input().split()))
	a.sort()
	c = 0
	while(m-1>0):
		y = a[0]
		if y <= m-2:
			a.pop(0)
			m -= 1 
			m -= y
			c += y
		elif y > m-2:
			y = m-1
			a[0] = y-m+1
			m -= y
			c += y
	print(c)