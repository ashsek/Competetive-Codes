for _ in range(int(input())):
	n = int(input())
	s = str(input())
	u = str(input())
	i=0
	score=0
	while(i<n):
		if s[i] != u[i]:
			if u[i] != 'N':
				i+= 2
				continue
		else:
			score+=1
		i+=1
	print(score)