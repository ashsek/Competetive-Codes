n = int(input())
k = int(input())

l = [i+1 for i in range(n)]

s = 0
p = []

if k == n:
	pass
else:
	for i in range(n):
		if i != n-1 and k > 0:
			if s+l[i] > l[i+1]:
				l[i] = -1*l[i]
			if s > 0:
				p.append(i)
				k -= 1
			s+=l[i]
		else:
			l[i] = -1*l[i]
print(l)
print(p)