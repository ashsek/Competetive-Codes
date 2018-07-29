# def maxSubArraySum(a,o,d):
# 	odd = 0      
# 	max_so_far = -9999999999 - 1
# 	max_ending_here = 0
# 	for i in range(len(a)):
# 		max_ending_here = max_ending_here + a[i]
# 		if a[i]%2 !=0: odd += 1
# 		if (max_so_far <= max_ending_here) and odd <=o and max_ending_here <= d:
# 			max_so_far = max_ending_here

# 		if odd > o or max_ending_here > d:
# 			max_ending_here = a[i] 
# 			odd = 0
# 	return max_so_far
def maxSubArraySum(a,o,d):
	max_so_far =a[0]
	curr_max = a[0]
	odd = 1 if a[0]%2 != 0 else 0
	for i in range(1,len(a)):
		if a[i]%2!=0: odd += 1
		if odd <= o and curr_max +a[i] <=d:
			curr_max = max(a[i], curr_max + a[i]) 
		else:
			curr_max = a[i]
			if a[i-1]%2 == 0:
				curr_max += a[i-1]
			odd = 1 if a[i]%2 != 0 else 0
		max_so_far = max(max_so_far,curr_max)
	return max_so_far if odd <= o else "IMPOSSIBLE"

for t in range(int(input())):
	n,o,d = list(map(int,input().split()))
	x1,x2,a,b,c,m,l = list(map(int,input().split()))
	x = [0]*n
	x[0] = x1
	x[1] = x2
	for i in range(n-2):
		x[i+2] = (a*x[i+1] + b*x[i] + c) % m
	s = []
	if l != 0:
		for j in range(n):
			s.append(x[j]+l)
	else:
		s = x[:]
	#print(s)
	print('Case #{0}: {1}'.format(t+1, maxSubArraySum(s,o,d))) if min(s) <= d else print("Case #{0}: IMPOSSIBLE".format(t+1))

