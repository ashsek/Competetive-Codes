q = int(input())
for j in range(q):
	n = int(input())

	# for i in range(n):
	s = list(map(int,input().split()))

	s.sort()

	while(len(s)>0 and s[0] < 2048):
		if(len(s)>=2):
			if(s[0] == s[1]):
				# print(s[0])
				s.append(s[0]*2)
				s.pop(0)
				s.pop(0)
			else:
			# print(s[0])
				s.pop(0)
		else:
			# print(s[0])
			s.pop(0)
		s.sort()

	if(2048 in s):
		print("YES")
	else:
		print("NO")