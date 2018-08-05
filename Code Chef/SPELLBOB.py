for _ in range(int(input())):
	s = list(input())
	s2 = list(input())
	t=3
	s3 = ''
	l = ['b','o','b']
	i = 0
	j = 0
	y = False
	j1  = 0
	j2 = 0
	if (s[j1] == 'b' or s2[j1] == 'b') and (s[j1+1] == 'o' or s2[j1+1] == 'o') and (s[j1+2] == 'b' or s2[j1+2] == 'b'):
		print('yes')
	elif (s[j1] == 'b' or s2[j1] == 'b') and (s[j1+1] == 'b' or s2[j1+1] == 'b') and (s[j1+2] == 'o' or s2[j1+2] == 'o'):
		print('yes')
	elif (s[j1] == 'o' or s2[j1] == 'o') and (s[j1+1] == 'b' or s2[j1+1] == 'b') and (s[j1+2] == 'b' or s2[j1+2] == 'b'):
		print('yes')
	else:
		print('no')
	# while True:
	# 	if j>=3:
	# 		break
	# 	if l[i] in s:
	# 		i1 = s.index(l[i])
	# 		y = True
	# 	elif l[i] in s2:
	# 		i1 = s2.index(l[i])
	# 		y = True
	# 	if y:
	# 		l.remove(l[i])
	# 		s.pop(i1)
	# 		s2.pop(i1)
	# 		y = False
	# 		t -= 1
	# 	if t == 0:
	# 		break
	# 	j+=1
	# if t == 0:
	# 	print('yes')
	# else:
	# 	print('no')