# 3 rows , N colums
# jth cell in ith row : Gij
# empty Gij = . else # blocked
# if N is odd answer is 0;
# if even and no blocks we have 2** n-2 /2 % mod
mod = 1000000007
cases = {'......':2,'#.....':1,'.#....':1, '....#.':1,'.....#':1,'#....#':0, '..#...':0,'..##..':0,'...#..':0,'##....':1,'....##':1}
for t in range(int(input())):
	n = int(input())
	l = []
	for _ in range(3):
		l.append(input())
	res = 1
	if n == 2:
		s = l[0] + l[1] + l[2]
		if s in cases.keys():
				#do something
			print('Case #{0}: {1}'.format(t+1,cases[s] if cases[s] != 2 else 1))
		else:
			print('Case #{0}: {1}'.format(t+1,0))
	if n > 2 and n%2 == 0:
		for i in range(1,n-1,2):
			s = ''
			s += l[0][i:i+2] + l[1][i:i+2] + l[2][i:i+2]
			if s in cases.keys():
				#do something
				if cases[s] == 0:
					res = 0
					break
				res *= cases[s]
			else:
				res = 0
				break
		print('Case #{0}: {1}'.format(t+1,res%mod))
	elif n%2 != 0:
		print('Case #{0}: {1}'.format(t+1,0))
