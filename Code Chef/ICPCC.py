for _ in range(int(input())):
	n = int(input())
	a = list(map(int,input().split()))
	l = []
	i = 0 if a[0] < a[-1] else -1
	l.append(min(a[0],a[-1]))
	a.pop(i)
	while(n-1):
		n-=1
		# print(l)
		if a[0] < a[-1]:
			if l[0] < a[0]:
				l.append(a[0])
			else:
				l = [a[0]] + l
			a.pop(0)
			continue
		elif a[0] >= a[-1]:
			if l[0] < a[-1]:
				l.append(a[-1])
			else:
				l = [a[-1]] + l
			a.pop(-1)
			continue
	# print(l)
	sc = 0
	for i in range(len(l)-1):
		if l[i] > l[i+1]:
			sc +=1
	print(sc)