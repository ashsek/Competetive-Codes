import math

n,k = list(map(int,input().split()))

l = [0]*(k+1)

for i in range(n):
	p = int(input())
	# l.append(p)
	l[p] += 1

# l.sort(reverse=True)
sets = 0
count = 0

while(sets < math.ceil(n/2)):
	l.sort(reverse = True)
	y = l.pop(0)
	sets += 1
	count += 2 if y >=2 else 1
	y -= 2 if y >= 2 else 1
	l.append(y)
print(count)
# print(sets)

# ans = n+k

# if(n == 1):
# 	print(0)

# for i in range(n):
# 	if ans == (i*(i+1))/2 + i:
# 		# break
# 		print(n-i)
# 		break