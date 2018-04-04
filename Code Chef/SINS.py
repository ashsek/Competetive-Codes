for i in range(int(input())):
	m,b = input().split()
	m = int(m)
	b = int(b)
	while m!=b or m == 0 or b == 0:
		if m < b:
			b -= m
		elif m > b:
			m -= b 
	print(m+b)
