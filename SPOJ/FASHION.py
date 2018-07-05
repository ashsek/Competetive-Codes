for _ in range(int(input())):
	n = int(input())
	m = list(map(int,input().strip().split()))
	f = list(map(int,input().strip().split()))
	m.sort()
	f.sort()
	s = 0
	for i in range(int(len(m))):
		s += m[i]*f[i] 
	print(s)