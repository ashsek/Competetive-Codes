for i in range(int(input())):
	l = input()
	n = len(l)
	b = l.count('B')
	ma = n-2
	mi = (n-2)//2  + 1 if n%2 == 1 else (n-2)//2+1
	flag = 0
	if mi <= b <= ma:
		print("Case #{0}: {1}".format(i+1,'Y'))
		continue
	else:
		flag = 1

	if flag == 1:
		ma = n-2
		mi = 3
		if mi <= b <= ma:
			print("Case #{0}: {1}".format(i+1,'Y'))
			continue
		print("Case #{0}: {1}".format(i+1,'N'))
