import itertools as it

for i in range(int(input())):
	np = 0
	n = int(input())
	a = list(map(int,input().split()))

	b = it.combinations(a, 2)
	for i in b:
		if sum(i)/2 in a:
			np += 1
	print(np)