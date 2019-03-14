def countDivisibles(A, B, M):
    # Add 1 explicitly as A is divisible by M 
    if (A % M == 0): 
        return ((B // M) - (A // M)) + 1
    # A is not divisible by M 
    return ((B // M) - (A // M)) 

for _ in range(int(input())):
	n,a,b,k = list(map(int,input().split()))
	sa = countDivisibles(1,n,a)
	sb = countDivisibles(1,n,b)
	if max(a,b)%min(a,b) != 0:
		sc = countDivisibles(1,n,a*b)
	else:
		sc = countDivisibles(1,n,max(a,b))
	# print(sa,sb,sc)
	sd = sa+sb-2*sc
	# print(sd)
	if sd >= k:
		print("Win")
	else:
		print("Lose")