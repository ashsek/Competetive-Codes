for i in range(int(input())):
	d,p = input().split()
	d = int(d)
	p = str(p)
	pl = list(p)
	j = 0
	if 'C' in pl:
		index = pl.index('C')
		if len(pl) -1 >d :
			print('Case #'+str(i+1)+ ': IMPOSSIBLE')
			continue
		if index < d:
			if (len(pl) - index -1 )*2 + index == d:
				print('Case #'+str(i+1)+ ': 0')
				continue
			else:
				while (len(pl) - index - j - 1)*2 + index + j > d and index + j < len(pl): # and (len(pl) - index - j -1)*2 + index + j < d:
					j += 1
				if (len(pl) - index - j - 1)*2 + index + j == d or (len(pl) - index - j - 1)*2 + index + j < d:
					print('Case #'+str(i+1)+ ': '+str(j))
				else:
					print('Case #'+str(i+1)+ ': IMPOSSIBLE')	

	else:
		if len(pl) > d:
			print('Case #'+str(i+1)+ ': IMPOSSIBLE')
			continue
		else:
			print('Case #'+str(i+1)+ ': 0')
			continue
			
			
	

			


