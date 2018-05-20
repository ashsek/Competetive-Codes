for o in range(int(input())):
	m,n = list(map(int,input().split()))
	a = list(map(int,input().split()))
	b = list(map(int,input().split()))
	result = 0
	l1 = range(m)
	for i,j in zip(l1,l1):
			fib = {}
			fib[0] = a[i]
			fib[1] = b[j]
			for k in range(2,n):
				fib[k] = fib[k-1] + fib[k-2]
			result += fib[n-1]
	f_r = result % (10**9 + 7)
	print(f_r)