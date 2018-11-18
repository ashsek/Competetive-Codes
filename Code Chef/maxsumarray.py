n, m = map(int,input().split())
a = list(map(int,input().split()))
low = max(a)
high = sum(a)

def possible(mid):
	cnt = 1
	temp = 0
	for i in range(n):
		if temp + a[i] <= mid:
			temp += a[i]
		else:
			temp = a[i]
			cnt += 1
	if cnt <= m:
		return True
	else:
		return False

while low <=high:
	mid = (high+low )//2

	if possible(mid):
		ans = mid
		high = mid - 1
	else:
		low = mid + 1

print(ans)