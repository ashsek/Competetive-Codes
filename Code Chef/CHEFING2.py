for _ in range(int(input())):
	n,k = map(int,input().split())
	a = (k-1)%1000000007
	a2 = (((k-1)%1000000007) * ((k-2)%1000000007))//2
	print((a + a2)%1000000007)
