for _ in range(int(input())):
	n = int(input())
	a = list(map(int,input().split()))
	k = int(input())
	x = int(input())

	if x == 0:
		print(sum(a))

	elif x == 1:
		no_zero = a.count(0)
		p = sum(a)
		while no_zero >= k//2:
			if no_zero >= k:
				p += k
				no_zero -= k

			if k//2 <= no_zero < k :
				p+= no_zero
				break
		print(p)
	# else:
	# 	raise ValueError