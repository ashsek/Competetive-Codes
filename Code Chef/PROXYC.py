import math

for _ in range(int(input())):
	d = int(input())
	s = str(input())
	mi = math.ceil(0.75*d) - s.count('P')
	mi2 = mi
	# flag = 1
	print(mi)

	for i in range(2,d-2):
		if s[i] == 'A':
			if s[i-2] == 'P' or s[i-1] == 'P':
				if s[i+1] == 'P' or s[i+2] == 'P':
					mi2 -= 1

	if mi2 <= 0:
		print(max(mi,0))
	else:
		print(-1)