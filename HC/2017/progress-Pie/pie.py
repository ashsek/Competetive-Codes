for t in range(int(input())):
	n,m = list(map(int,input().split()))
	l = []
	for _ in range(n):
		k = list(map(int,input().split()))
		k.sort()
		l.append(k)
	t_l = l[:]
	for i in range(len(t_l)):
		tax = 1
		for j in range(len(t_l[i])):
			t_l[i][j] += tax
			tax += 2
	cost = 0
	i = 0
	j = 0
	while n:
		if i < len(t_l)-1 and t_l[i][j] <= t_l[i+1][0]:
			cost += t_l[i][j]
			if j < len(t_l[i]) - 1:
				j += 1
			else:
				if i < len(t_l)-1:
					i += 1
					j = 0
			n -= 1
		elif i < len(t_l)-1:
			i += 1
			j = 0
		elif i == len(t_l)-1 and n != 0:
			cost += t_l[i][j]
			if j < len(t_l[i]) - 1:
				j += 1
			n -= 1 
	print(t_l)
	print("Case #{0}: {1}".format(t+1, cost))