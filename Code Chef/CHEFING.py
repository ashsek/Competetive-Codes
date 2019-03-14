for _ in range(int(input())):
	n = int(input())
	l = []
	a = {}
	for k in range(n):
		l.append(input())
	s = list(set(list(l[0])))
	for j in s:
		a[j] = 1

	for k in range(1,n):
		for j in a:
			if j not in l[k]:
				a[j] = 0

	ans = 0
	for j in a:
		if a[j] ==  1:
			ans += 1
	print(ans)






