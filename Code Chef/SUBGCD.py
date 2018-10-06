def gcda(a,b):
	if b > a:
		a,b = b,a
	if b == 0:
		return a
	else:
		return gcda(b,a%b)

for _ in range(int(input())):
	n = int(input())
	a = list(map(int,input().split()))
	y=0
	gd = a[0]
	for i in range(n-1):
		if gcda(gd,a[i+1]) == 1:
			y = 1
			break
	if y:
		print(n)
	else:
		print(-1)