for _ in range(int(input())):
	n = int(input())
	s = input()
	v = ['a','e','i','o','u']
	c = 0
	for i in range(n-1):
		if s[i].lower() not in v and s[i+1].lower() in v:
			c += 1
	print(c)