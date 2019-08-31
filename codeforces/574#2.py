n = int(input())

h1 = list(map(int,input().split()))
h2 = list(map(int,input().split()))

dp = [[0]*(n+1)]
dp.append([0]*(n+1))

for i in range(1,n+1):
	dp[0][i] = max(dp[0][i-1], dp[1][i-1] + h1[i-1])
	dp[1][i] = max(dp[1][i-1], dp[0][i-1] + h2[i-1])

print(max(dp[0][n], dp[1][n]))