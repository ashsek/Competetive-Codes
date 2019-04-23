import sys
sys.setrecursionlimit(10000000)
def solve(n,src,dst):
	if (dp[n][src]): return dp[n][src] 
	if n == 0:
		if src == dst:
			dp[n][src] = 1;
			return dp[n][src]
		return 0
	ans = 0
	for i in range(4):
		if i == src:
			continue
		ans += solve(n-1,i,3)
	dp[n][src] = ans
	return dp[n][src]
	# return solve(n-1,0,3) + solve(n-1,1,3) + solve(n-1,2,3)

n = int(input())
dp = [[0]*4 for _ in range(n+1)]

print(int(solve(n,3,3)%(1e9+7)))