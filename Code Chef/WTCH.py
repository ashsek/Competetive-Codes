for _ in range(int(input())):
	n = int(input())
	s = list(input())
	ans = 0
	for i in range(n): 
		if i == n-1:
			if s[i-1] == '0' and s[i] == '0':
				ans += 1
				s[i] = '1'
			continue
		if i == 0:
			if s[i] == '0' and s[i+1] == '0':
				ans += 1
				s[i] = '1'

		if s[i-1]=='0' and s[i] == '0' and s[i+1] == '0':
			ans += 1
			s[i] = '1'
	print(ans)
