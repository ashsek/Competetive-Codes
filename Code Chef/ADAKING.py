for _ in range(int(input())):
	r,c,k = list(map(int,input().split()))
	k1 = min(max(c,c-k),k)
	if [r,c] == [1,1] or [r,c] == [8,8] or [r,c] == [1,8] or [r,c] == [8,1]:
		mv = 4 + 5*(k-1)
		print(mv)
		continue
	elif r == 1 or c == 7 or c == 1 or r == 7:
		mv = 6 + 5*(k1-1) + 4*(k-k1)
		print(mv)
		continue
	else:
		mv = 9 + 5*(k1-1) + 4*(k-k1)
		print(mv)
		continue