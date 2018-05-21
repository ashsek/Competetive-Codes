#It works but exceeds the time limit :/
for i in range(int(input())):
	n,k = list(map(int,input().split()))
	l = []
	l.append(k)
	l.append(1)
	xor = k^1
	u = n-k
	o = n
	o -= 2
	if u > 0:
		while u:
			l.append(k)
			xor ^= k
			u -= 1
			o -= 1
	while o:
		i = 1
		txor = xor
		while True:
			n_xor = xor^i
			if n_xor > txor or n_xor == 0 and i < k:
				i +=1
				txor = n_xor
			if n_xor < txor and n_xor != 0:
				l.append(i-1)
				break
		xor = n_xor
		o -= 1
	print(" ".join(str(x) for x in l))

