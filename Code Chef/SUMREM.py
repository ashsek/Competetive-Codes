import sys
sys.setrecursionlimit(923000045)
def solve(t):
	if visitednodes[t] == 1: return 0
	else:
		visitednodes[t] = 1
		l3 = len(V[t])
		k = a[t]
		for u in range(l3):
			k += solve(V[t][u])
		return max(-x, k)

for _ in range(int(input())):
	n,x = list(map(int,input().split()))
	a = list(map(int,input().split()))
	V = []
	for p in range(n+1):
		V.append([])
	for q in range(n-1):
		u,v = list(map(int,input().split()))
		V[u].append(v)
		V[v].append(u)
	a = [0]+a
	visitednodes = [0]*(n+1)
	k = solve(1)
	print(k)