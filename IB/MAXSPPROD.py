def maxSpecialProduct(A):
	n = len(A)
	pro = [0]*n
	for i in range(n):
		klef = -1
		krig = -1
		for k in range(i):
			if A[k] > A[i]:
				klef = max(k,klef)

		for k in range(i,n):
			if A[k] > A[i]:
				krig = k
				break


		if klef > 0 and krig > 0:
			# print(la,ra,klef,krig,i)
			pro[i] = klef*krig
		else:
			pro[i] = 0
	return max(pro)%1000000007

print(maxSpecialProduct([ 5, 9, 6, 8, 6, 4, 6, 9, 5, 4, 9 ]))

