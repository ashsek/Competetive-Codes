while(True):
	j = float(input())
	if j == 0.00:
		break
	k = 2
	c = 0
	su = 0
	while(su <= j):
		su += 1/(k+c)
		c+=1
	print(c, 'card(s)')