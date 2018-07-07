for j in range(int(input())):
	n = int(input())
	p = []
	for i in range(n+1):
		p.append(int(input()))
	if n%2 != 0:
		print('Case #'+str(j+1)+': 1')
		print('0.0')
	else:
		print('Case #'+str(j+1)+': 0')
