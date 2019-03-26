n = int(input())
c = 0
for i in range(n):
	c = 0
	l = []
	for j in range(n):
		if (i - j == i^j):
			c += 1
			l.append(j)
	print(i, 'has',c, 'which are', *l)