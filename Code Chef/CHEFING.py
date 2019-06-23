for _ in range(int(input())):
	n,k = map(int,input().split())
	# a = (k-1)%1000000007
	# a2 = (((k-1)%1000000007) * ((k-2)%1000000007))//2
	mo = 1000000007

	x = ((k-1)//(n-1))%mo

	a1 = ((k-1)*(1+x))%mo

	a2 = (x*(k+n-2)//2)%mo

	print((a1-a2)%mo)
	# a = (k-1)%mo



	# a2 = ((k*(k-1))//(n-1))%mo


	# a3 = ((n * (k-1) * (k+n-2))// (2*(n-1)*(n-1)))%mo

	# a4 = (((k-1) * (k+n-2))// (2*(n-1)*(n-1)))%mo

	# a5 = ((k-1) // (n-1))%mo

	# if min(a,a2,a3,a4,a5) > 1e9+7:
	# 	raise ValueError

	# print(int((((a%mo + a2%mo)%mo - a3%mo + a4%mo)%mo - a5%mo)%mo))
	# a2 = ((((k%mo)*((k-1)%mo))%mo)//(n-1))%mo
	# a3 = ((((((n%mo) * (k%mo-1))%mo) * ((k%mo+n%mo)%mo-2)))%mo)// (2*(n-1)*(n-1))

	# a4 = ((k%mo-1) * ((k%mo+n%mo)%mo-2))// (2*(n-1)*(n-1))
		# test
	# a6 = ((2*n-1)*(k**2) + (n**2 - 6*n +2 )*k + (3*n-1))//((n-1)**2)
	# i = 1
	# while(k - i*n + i-1 > 0):
	# 	a += k%mo - (i*(n%mo))%mo + i%mo-1
	# 	i += 1
	# print(i)
	# print(a)
	# print(int(a%mo + a6%mo)%mo)

