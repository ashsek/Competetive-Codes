for _ in range(int(input())):
	s = input()
	ls = len(s)
	ar = [0]*ls

	for j in range(ls):
		if s[j] == '.':
			pass
		else:
			k = int(s[j])
			start = max(0, j - k)
			end = min(ls, j + k)
			for o in range(start,min(end+1,ls)):
				ar[o]+=1

	# print(ar)
	y = 1
	for k in ar:
		if k > 1:
			y=0
	if y:
		print("safe")
	else:
		print("unsafe")
