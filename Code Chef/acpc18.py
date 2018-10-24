for _ in range(int(input())):
	n,k = map(int,input().split())
	a = list(map(int,input().split()))
	a.sort()
	arr = []
	for j in range(n-1):
		if a[j] > k:
			arr.append(a[j]-k)

	if len(arr) > 0:
		while(len(arr) > 1):
			arr[-1] -= 1
			arr[0] -= 1

			if arr[0] <= 0:
				arr.pop(0)

			arr.sort()

		print(n - 1+ a[-1] - arr[0])

	else:
		print(sum(a))
