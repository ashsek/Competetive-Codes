n = int(input())
ar = list(map(int,input().split()))

for i in range(len(ar)):
	if ar[i] >=0:
		ar[i] = -ar[i] -1

n_ng = len(ar)

if n_ng%2 == 0:
	print(*ar)
else:
	a2 = list(set(ar))
	a2.sort()
	if max(a2) == -1:
		if len(a2) == 1:
			# ar.count(-1)
			for i in range(len(ar)):
				# if ar[i] >=0:
				ar[i] = -ar[i] -1
		else:
			a2.remove(-1)
			ar[ar.index(max(a2))] = -ar[ar.index(max(a2))] -1
	else:

		ar[ar.index(max(a2))] = -ar[ar.index(max(a2))] -1
	print(*ar)


