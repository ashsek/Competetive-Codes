def gcd(a,b):
    while a:
        a,b = b%a,a
    return b

# global c
# def gc(l,i):
# 	f = True
# 	l2 = l[:]
# 	for j in l:
# 		if j%i == 0:
# 			continue
# 		else:
# 			f = False
# 			c += 1
# 			l2.remove(j)
# 	if f:
# 		print(c)
# 	else:
# 		gc(l2)




for i in range(int(input())):
	n = int(input())
	l = list(map(int,input().split()))
	c = 0
	l.sort()
	y = gcd(l[0],l[1])

	for i in range(2,len(l)):
		y = gcd(y,l[i])

	if y == 1:
		print(0)
	else:
		print(-1)


	
'''	#we can delete n-1 elements 
	# minimum deletions so that GCD = 1.
	# or say Impossible
	d = 0
	if n == 2:
		if gcd(l[0],l[1]) == 1:
			print(0)
		else:
			print(-1)
	elif n == 3:
		x = gcd(l[0],l[1])
		y = gcd(l[2],x)
		if y == 1:
			print(0)
		elif x == 1 or gcd(l[1],l[2]) == 1 or gcd(l[0],l[2]) == 1:
			print(1)
		else:
			print(-1)
''' 
## Dummy Constraints over




