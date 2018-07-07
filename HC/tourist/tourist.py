from math import gcd

def getLCM(a, b):
    return a * b // gcd(a, b)

def calculate(a,c,k):
    l = []
    o = 0
    k2 = k
    for _ in range(c):
        k = k2 
        l = []
        while k:
            l.append(a[o])
            if o >= len(a)-1:
                o = 0
            else:
                o += 1
            k -= 1

    return l

for i in range(int(input())):
	# campus has N attractions
	# ith attraction is Ai
	# see exactly k attractions
	# sort N into non decreasing of seen,
	n,k,v = list(map(int,input().split()))
	a = []
	for _ in range(n):
		a.append(input())
	# if n == 2:
	# 	if v%2 == 0:
	# 		print('Case #'+str(i+1)+':',a[1])
	# 	else:
	# 		print('Case #'+str(i+1)+':',a[0])
	# 	continue

	lcm = getLCM(n,k)
	p = []
	b = v//lcm
	if v != lcm:
		c = abs(v-lcm*b)
	if lcm*b - v == 0:
		c = lcm
	l2 = calculate(a,c,k)
	l2.sort(key=lambda x: a.index(x))
	s = ''
	for s3 in l2:
		s += ' ' + s3 
	print('Case #'+str(i+1)+':'+ s)
	# if v == b*lcm+1:
	# 	o = 0
	# 	while k:
	# 		p.append(a[o])
	# 		o+=1
	# 		k-=1
	# 	print('Case #'+str(i+1)+':',p)
	# else:
	# 	if lcm > v:
	# 		c = v
	# 	else:
	# 		c = abs(v-lcm*b+2)
	# 	calculate(a,c,k)