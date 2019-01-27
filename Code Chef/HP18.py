for _ in range(int(input())):
	n,a,b  = list(map(int,input().split()))
	e = list(map(int,input().split()))
	ea = 0
	eb = 0
	eab = 0
	for k in e:
		if a == 1 or b == 1:
			# raise ValueError
			if b == 1:
				if k%a == 0:
					ea += 1
			if a == 1:
				if k%b == 0:
					eb += 1
			eab = max(ea,eb)
		else:
			# raise ValueError
			if k%a == 0 and k%b !=0:
				ea += 1
			if k%b ==0 and k%a !=0:
				eb += 1
			if k%a == 0 and k%b == 0:
				eab += 1

	if a == 1 and b != 1:
		if eb == n and n%2 != 0:
			print("ALICE")
		else:
			print("BOB")
		raise ValueError
		continue

	if b == 1 and a != 1:
		if ea == n and n%2 != 0:
			print("BOB")
		else:
			print("ALICE")
		raise ValueError
		continue

	if a == 1 and b == 1:
		if n%2 == 0:
			print("ALICE")
		else:
			print("BOB")
		raise ValueError
		continue

	if a == b:
		print("BOB")
	else:
		if ea>eb:
			print("BOB")
		if ea<eb:
			print("ALICE")
		if ea == eb:
			if eab != 0:
				print("BOB")
			else:
				print("ALICE")
			# if ea == 0:
			# 	raise ValueError
			# if ea%2 == 0:
			# 	# raise ValueError
			# 	# if eab == 0:
			# 		# raise ValueError
			# 	if eab%2 == 0:
			# 		# raise ValueError
			# 		print("ALICE")
			# 	else:
			# 		# raise ValueError
			# 		print("ALICE")
			# else:
			# 	# raise ValueError
			# 	if eab%2 != 0:
			# 		print("BOB")
			# 	else:
			# 		print("ALICE")
		# print("ALICE")
		# raise ValueError
		# if eab%2 == 0:
		# 	if ea >= eb :
		# 		print("BOB")
		# 	else:
		# 		print("ALICE")
		# else:
		# 	if ea +1  >= eb -1:
		# 		print("BOB")
		# 	else:
		# 		print("ALICE")
	# print(ea,eb,eab)