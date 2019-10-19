t = int(input())
for _ in range(t):
	n = int(input())
	o = []
	for k in range(n):
		l,r,v = list(map(int,input().split()))
		o.append([v,l,r])
	o.sort()
	prev = o[0][0]
	l = o[0][1]
	r = o[0][2]
	count = -1
	for j in o:
		if(j[0] == prev):
			if(l <= j[1] <= r or l <= j[2] <= r):
				count += 1
				l = j[1]
				r = min(r, j[2])
			else:
				count = 0
				l = j[1]
				r = j[2]
		else:
			count = 0
			prev = j[0]
			l = j[1]
			r = j[2]
		if count >= 2:
			break
	if(count>=2):
		print('NO')
	else:
		print('YES')
	# print(o)1 
