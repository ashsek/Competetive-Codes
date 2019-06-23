for _ in range(int(input())):
	s = input()
	s2 = list(s)
	s2 = list(set(s2))
	c = []
	for j in s2:
		c.append(s.count(j))

	if len(s)%2 == 0:
		n_o = 0
		for j in c:
			if j%2 != 0:
				n_o += 1

		if n_o == 2:
			print('DPS')
		else:
			print('!DPS') 

	else:
		n_o = 0
		for j in c:
			if j%2 != 0:
				n_o += 1

		if n_o == 3 or n_o == 1:
			print('DPS')
		else:
			print('!DPS') 

	# print(c)