while True:
	a1,a2,a3 = list(map(int,input().split()))
	if a1 == 0 and a2 == 0 and a3 == 0:
		break
	else:
		if a2-a1 == a3-a2:
			print('AP',a3 + a2-a1)
		else:
			print('GP',int(a3*(a3/a2)))