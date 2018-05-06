for i in range(int(input())):
	n = int(input())
	la = list(map(int,input().split()))
	# ^ -> XOR operator,
#	lb = [0]*(n**2)
	# for i in range(n):
	# 	for j in range(n):
	# 		lb[i*n + j] = la[i] + la[j]

	x = la[0]

	for i in (la[1:]):
		x ^= i
		
	print(x*2)