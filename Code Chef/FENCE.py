import math
n,k = map(int,input().split())
a = list(map(int,input().split()))
up = 10**14
low = 0
while low <= up:
	count = 0
	count2 = 0
	mid = (up + low)//2
	# print(mid)
	if mid == 0:
		break
	for j in a:
		count += math.floor(j/mid)
		# while j >= mid:
		# 	count += 1
		# 	j -= mid

	for j in a:
		count2 += math.floor(j/(mid+1))
		# while j >= mid+1:
		# 	count2 += 1
		# 	j -= mid+1

	# if count2 < k and count >=k:
	# 	break
	if count < k:
		up = mid -1
	if count >= k:
		low = mid+1
		answer = mid
# print(count)
# print(count2)
print(answer)

