for i in range(int(input())):
	n,k = list(map(int,input().split()))
	# n = number of elements and k = maximum number of swaps,
	a = list(map(int,input().split()))
	#tomu -> all odd.
	#motu -> all even.

	o_a = []
	e_a = []
	for j in range(len(a)):
		if j%2 == 0:
			e_a.append(a[j])
		else:
			o_a.append(a[j])
	o_a.sort()
	e_a.sort()
	#print(o_a,e_a)
	if sum(o_a) == sum(e_a):
		print('NO')
	else:
		o = 0
		while k:
			if sum(o_a) > sum(e_a):
				break
			else:
				y = o_a[o]
				o_a[o] = e_a[len(e_a)-1-o]
				e_a[len(e_a)-1-o] = y
				k -= 1
				if o +1 < len(a)//2: o += 1
		#print(o_a,e_a)
		if sum(o_a) > sum(e_a):	print('YES')
		else: print('NO')

