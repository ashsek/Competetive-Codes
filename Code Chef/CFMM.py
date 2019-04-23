t = int(input())
for p in range(t):
	number = int(input())
	lis = []
	ar = [0]*6
	for z in range(number):
		lis.append(input())
	
	for p in lis:
		ar[0] += p.count('c')
		ar[1] += p.count('o')
		ar[2] += p.count('d')
		ar[3] += p.count('e')
		ar[4] += p.count('h')
		ar[5] += p.count('f')

	ar[0]=ar[0]//2
	ar[3] = ar[3]//2
	print(min(ar[:6])) 		
