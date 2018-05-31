for i in range(int(input())):
	j,k = input().split()
	j2 = j[::-1]
	k2 = k[::-1]
	z = int(j2) + int(k2)
	print(z[::-1])
