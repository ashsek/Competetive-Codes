# list(map(int,input().split()))
# Function to get no of set bits in binary 
# representation of passed binary no. */ 
# import heapq

def countSetBits(n): 
	count = 0
	while (n): 
		n &= (n-1)  
		count+=1
	return count 

for k in range(int(input())):
	n,q = list(map(int,input().split()))
	a = list(map(int,input().split()))
	ans = [] #store answer for last print
	xo = a[0]
	n_o = 0
	o_indixes = []
	# o_indixes_max = []
	
	if countSetBits(a[0])%2 != 0:
		n_o += 1
		o_indixes.append(0)

	for i in range(1,len(a)):
		xo = xo^a[i]
		if countSetBits(a[i])%2 != 0:
			n_o += 1
			o_indixes.append(i)

	mi = min(o_indixes)
	ma = max(o_indixes)

	for e in range(q):
		p,v = list(map(int,input().split()))

		if countSetBits(a[p])%2 != 0:
			n_o -= 1
			o_indixes.remove(p)
			if p == mi:
				mi = min(o_indixes)
			if p == ma:
				ma = max(o_indixes)

		if countSetBits(v)%2 != 0:
			n_o += 1
			o_indixes.append(p)
			if p > ma:
				ma = p
			if p < mi:
				mi = p

		xo = xo^a[p]^v #new xor
		a[p] = v


		if countSetBits(xo)%2 == 0:
			ans.append(len(a)) #append length of max array
		else:
			#find set bits
			ans.append(max(len(a)-(mi+1), len(a)-(len(a)-ma))) 
	# print(n_o)
	# print(ans)
	print("Case #{}:".format(k+1), *ans)
# while(1>0):
# 	i = int(input())
# 	print(countSetBits(i)) 