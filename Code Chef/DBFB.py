for o in range(int(input())):
	m,n = input().split()
	m,n = int(m),int(n)
	a = list(map(int,input().split()))
	b = list(map(int,input().split()))
	result = 0
	for i in range(m):
		for j in range(m):
			fib = {}
			fib[0] = a[i]
			fib[1] = b[j]
			for k in range(2,n):
				fib[k] = fib[k-1] + fib[k-2]
			result += fib[n-1]
	f_r = result % (10**9 + 7)
	print(f_r)