for _ in range(int(input())):
	s = input()
	que = []
	stack = []
	operator = ['^','/','*','+','-',')','('] # BODMAS
	for j in s:
		if j.isalpha(): #is a alphabet then do something
			#do something
			que.append(j)
		if j in ['^','/','+','-','*']:
			#do something
			while operator.index(j) > operator.index(stack[-1]):
				que.append(stack.pop())
			stack.append(j) 
		if j == '(':
			#pushing on stack
			stack.append(j)
		if j == ')':
			k = stack.pop()
			while k != '(':
				que.append(k)
				k = stack.pop()
	while stack:
		k2 = stack.pop()
		que.append(k2)
	print(''.join(que))
