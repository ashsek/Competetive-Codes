s = []
for i in range(int(input())):
	s.append(input())

for j in range(int(input())):
	r,p = input().split()
	r = int(r)
	s2 = []
	s3 = s[:r]
	s3.sort()
	s = 0
	e = r
	while True:
		l = (s+e)//2
		if p == s3[l][:len(p)]:
			e = l
			s2.append(s3[l])
		elif p != s3[l][:len(p)]:
			s = l
		elif p != s3[r-1][:len(p)]:
			p = p[:len(p)-1]
			s = 0
			e = r
	print(min(s2))