for t in range(int(input())):
	n = int(input())
	a = list(map(int,input().split()))
	ans = []
	b = a[:]
	b.sort()
	for i in range(len(a)):
		if i > 1:
			if a[i] <= a[i-1]:
				continue
		for j in reversed(range(i,len(a))):
			if a[i] >= a[j]:
				ans.append(j-i+1)
				break
	print(max(ans))
