for _ in range(int(input())):
	n = int(input())
	a = list(map(int,input().split()))
	l = [0]*(n+1)
	for j in a:
		l[j] += 1
	l.sort(reverse=True)
	last = -1
	ans= 0
	vis = []
	for j in range(len(l)):
		if l[j] == 0:
			break
		if l[j] in vis:
			k = l[j]
			while(k in vis and k > 0):
				k-= 1
			ans += k
			vis.append(k)
		else:
			ans += l[j]
			vis.append(l[j])
	print(ans)
