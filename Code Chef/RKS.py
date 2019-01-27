for _ in range(int(input())):
	n,k = list(map(int,input().split()))
	r_l = [0]*n
	c_l = [0]*n
	for _ in range(k):
		r,c = list(map(int,input().split()))
		r_l[r-1] = 1
		c_l[c-1] = 1
	r_ans = []
	k_ans = []
	for j in range(n):
		if r_l[j] == 0:
			r_ans.append(j)
	for p in range(n):
		if c_l[p] == 0:
			k_ans.append(p)
	# r_ans.sort()
	# k_ans.sort()

	print(n-k,end=' ')
	for j in range(len(r_ans)):
		print(r_ans[j]+1,k_ans[j]+1,end = ' ')
	print('')


