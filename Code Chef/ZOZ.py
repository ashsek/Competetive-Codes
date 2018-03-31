for i in range(int(input())):
	o = 0
	n,k = list(map(int,input().split()))
	l = list(map(int,input().split()))
	l.sort(reverse = True)
	for j in l:
		if j + k > sum(l) - j:
			o += 1
		else:
			break
	print(o)
