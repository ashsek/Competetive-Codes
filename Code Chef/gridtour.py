for _ in range(int(input())):
	n,m,k = list(map(int,input().split()))
	flag = 0
	if n == 1:
		if k%m == 0:
			flag = 1
			# continue

	elif m == 1:
		if k%n == 0:
			flag = 1
			# continue

	elif k%n == 0 or k%m == 0:
		flag = 1
		# continue
	if flag:
		print(-1)
	else:
		print(n*m)