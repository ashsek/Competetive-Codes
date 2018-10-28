for _ in range(int(input())):
	n,k = map(int,input().split())
	a = list(map(int,input().split()))
	count = 0
	for j in a:
		if j > 1:
			count += 1

	if count <= k:
		print("YES")
	else:
		print("NO")