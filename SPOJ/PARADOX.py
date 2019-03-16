n = int(input())
l = [-1]*(n+1)
l[1] = 1
flag = 0
for j in range(1,n+1):
	s = list(input().split())
	n1 = int(s[0])
	s2 = 0 if s[1] == 'false' else 1
	if l[n1] == -1:
		if l[j] == 1:
			l[n1] = s2
		else:
			l[n1] = 0 if s2 == 1 else 1
	else:
		if l[j] == 0:
			p = 1 if l[n1] == 0 else 0
			if p != s2:
				flag = 1

		else:
			p = l[n1]
			if p != s2:
				flag = 1 

if flag:
	print('PARADOX')
else:
	print('NOT PARADOX')
