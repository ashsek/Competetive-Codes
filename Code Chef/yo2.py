def solve(s):
	l = [0]*k
	for i in range(s,len(a)):
		z = a[i]
		l[(i)%k] += z
	return l
for _ in range(int(input())):
	n,k = list(map(int,input().split()))
	a = list(map(int,input().split()))
	i = 0
	u = [] 
	if k < n:
		while(i<n):
			u.append(max(solve(i)))
			i += k
	else:
		u = a[:]
	print(max(u))