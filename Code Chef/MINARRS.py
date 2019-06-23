for _ in range(int(input())):
	n = int(input())
	a = list(map(int,input().split()))
	a1 = max(a)
	a2 = min(a)
	a3 = max(a,key=a.count)
	r1=0
	r2=0
	r3=0
	for j in a:
		r1 += int(j^a1)
		r2 += int(j^a2)
		r3 += int(j^a3)

	print(min(r1,r2,r3))