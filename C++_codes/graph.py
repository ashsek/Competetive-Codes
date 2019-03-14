n,m,k = list(map(int,input().split()))

N = list(map(int,input().split()))
E = []
for j in range(n+1):
	E.append([])
# print(E)
for _ in range(m):
	x,y = map(int,input().split())
	# print(x,y)
	E[x].append(y)
	E[y].append(x)

for p in range(1,n+1):
	s = E[p][:]
	s.sort(reverse=True)
	v = []
	for j in s:
		v.append(N[j-1])
	v2 = v[:]
	v.sort(reverse=True)
	# print(s)
	o = v[k-1]
	print(s[v2.index(o)])