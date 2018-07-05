while True:
	c = int(input())
	if c==0: break
	codex = input()
	#print(''.join())
	for i in range(c):
		for j in range(len(codex)/c):
			l.append(codex[j*c + (c-i-1  if j%2 else  i)])
	print(''.join(l))
