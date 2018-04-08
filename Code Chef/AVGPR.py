for i in range(int(input())):
	np = 0
	n = int(input())
	a = list(map(int,input().split()))
	for i in a[:len(a)//2]:
		for j in a[a.index(i):]:
			if (i + j)/2 in a:
				np += 1			
	print(np)