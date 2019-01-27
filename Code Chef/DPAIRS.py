n,m = list(map(int, input().split()))
a = list(map(int, input().split()))
b = list(map(int, input().split()))
a2 = a.index(min(a))
b2 = b.index(max(b))

for i in range(m):
	# if i != a2:
	print(a2,i)

for j in range(n):
	if j != a2:
		print(j,b2)