for i in range(int(input())):
	n,m = map(int,input().split())
	l=[0]*n
	flag = 0
	for _ in range(m):
		x,y,z = map(int,input().split())
		if l[x-1] != 0:
			if l[x-1] != z:
				flag = 1
				continue
		elif l[y-1] != 0:
			if l[y-1] != z:
				flag = 1
				continue
		else:
			l[x-1] = z
			l[y-1] = z

	if flag != 1:
		print("Case #{0}: ".format(i+1), end='')
		print(*l)
	else:
		print("Case #{0}: Impossible".format(i+1))