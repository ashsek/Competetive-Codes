for _ in range(int(input())):
	n,m= map(int,input().split())
	d = []
	v = []
	inde = [-1]*(m+1)
	co = 0
	for i in range(n):
		j,k = map(int,input().split())
		if inde[j] == -1:
			inde[j] = co
			d.append(j)
			v.append(k)
			co += 1
		else:
			if v[inde[j]] < k:
				v[inde[j]] = k
	v.sort()
	print(v[-1] + v[-2])
