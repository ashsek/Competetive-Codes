def gcd(a,b):
    while a:
        a,b = b%a,a
    return b


for i in range(int(input())):
	n = int(input())
	l = list(map(int,input().split()))
	#we can delete n-1 elements 
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
			