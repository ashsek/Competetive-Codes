for i in range(int(input())):
	n = 0
	a,b,c = list(map(int,input().split()))
	while 2*b != a + c:
		if b - a > c  - b:
			b -= 1
			n += 1
		else:
			c -= 1
			n += 1
	print(n)  