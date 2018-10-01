for _ in range(int(input())):
	n = int(input())
	a = list(map(int,input().split()))
	product = 1
	gcd = a[0]
	l = [0,0,0]
	count = 0
	n_co=[]
	n_np = []
	y = 1
	for j in a:
		if j == 0:
			l[0] += 1
		elif j == -1:
			l[1] += 1
		elif j == 1:
			l[2] += 1
		else:
			count+= 1
			n_co = 

	if count >=  1:
		if count == 1:
			if n_np[0]
	else:
		if l[1] > 1 and l[2] == 0:
			print("no")
		else:
			print("yes")