for _ in range(int(input())):
	n = int(input())
	a = list(map(int,input().split()))
	d = list(map(int,input().split()))
	b = -1
	for i in range(n):
		if i == n-1:
			if a[0] + a[i-1] < d[i]:
				b = max(b,d[i])
			continue
		if a[i+1] + a[i-1] < d[i]:
			b = max(b,d[i])
	print(b)

