"""
flips exactly K pancakes (Does not change right to left order of pancakes),

"""
n,m =list(map(int,input().split()))
N = list(map(int,input().split()))
M = list(map(int,input().split()))
N.sort()
M.sort()
i = 0
for k in M:
	if k > N[i]:
		N.pop(N[i])
	else:
		if i < len(N):
			i += 1 
print(sum(N))



T = int(input())
for i in range(T):
	s,k = input().split()
	k = int(k)
	s = str(s)
	# + => Happy side
	# - => Other side
