def ones(a):
	res = 0
	while a:
		res += a%2
		a = a//2
	return res

def counting(a,b):
	if a == b: return 0
	
	elif b == 0: return -1
	elif b == 1: return 1 if a == 0 else -1
	ops = ones(b-1) - ones(a) + 1
	return ops if ops >0 else 2

for i in range(int(input())):
	j,k = list(map(int,input().split()))
	print(counting(j,k)) 