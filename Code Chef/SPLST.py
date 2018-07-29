for i in range(int(input())):
	a,b,c,x,y = list(map(int,input().split()))
	if (x >= b and y >= c):
		if x-b + y-c == a:
			print('YES')
			continue
	if (x >= c and y >= b):
		if x-c + y-b == a:
			print('YES')
			continue
	if (x >= a and y >= c):
		if x-a + y-c == b:
			print('YES')
			continue
	if (x >= c and y >= a):
		if x-c + y-b == b  :
			print('YES')
			continue
	if (x >= a and y >= b):
		if x-a + y-b == c:
			print('YES')
			continue
	if (x >= b and y >= a):
		if x-b + y-a == c:
			print('YES')
			continue
	print('NO')