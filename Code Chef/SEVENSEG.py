def  countSetBits(n): 
	count = 0
	while (n): 
		count += n & 1
		n >>= 1
	return count

for _ in range(int(input())):
	la = []
	lb = []
	masks = [63,6,91,79,102,109,125,7,127,111]
	conf = []
	for o in range(int(input())):
		n,k = list(map(int,input().split()))
		la.append(n)
		lb.append(k)

	q = len(la)
	for i in range(128):
		f = 1
		for j in range(q):
			if countSetBits(masks[la[j]]&i) != lb[j]:
				f = 0
				break
		if f:
			conf.append(i)

	k = max(lb)
	mi =999
	ma = -999
	if len(conf)>0:
		for u in conf:
			p = 7 - countSetBits(u)
			mi = min(mi,p)
			ma = max(ma,p)
		print(mi,ma)
	else:
		print('invalid')
 