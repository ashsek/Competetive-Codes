for i in range(int(input())):
	n,k = map(int,input().split())
	ans = 2**n
	for _ in range(k):
		s = input()
		n2 = len(s)
		ans -= 2**(n-n2)

	print("Case #{0}: {1}".format(i+1,max(ans,0)))
