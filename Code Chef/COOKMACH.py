for _ in range(int(input())):
	steps = 0
	a,b = map(int,input().split())
	while((a & -a) != a):
		a >>= 1
		steps += 1

	while(a<b):
		a <<= 1
		steps += 1

	while(a > b):
		a >>= 1
		steps += 1

	print(steps)
		# Do it