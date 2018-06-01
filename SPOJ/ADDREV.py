for i in range(int(input())):
	j,k = input().split()
	j = str(j)
	k = str(k)
	j2 = j[::-1]
	k2 = k[::-1]
	z = int(j2) + int(k2)
	z = str(z)
	z2 = int(z[::-1])
	print(z2)
