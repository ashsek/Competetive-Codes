# import operator as op
# from functools import reduce

# def ncr(n, r):
# 	r = min(r, n-r)
# 	numer = reduce(op.mul, range(n, n-r, -1), 1)
# 	denom = reduce(op.mul, range(1, r+1), 1)
# 	return numer / denom

# def ss(s):
#   return [s[i:j+1] for i in range(n) for j in range(i,n)]

# print get_all_substrings('abcde')


def sol(s):
	ind = []
	for i in range(n):
		if s[i] == x:
			ind.append(i+1)
	k = len(ind)
	c = 0
	if k == 0:
		return 0
	else:
		for i in range(k):
			if i == 0:
				c += ind[i] * (n-ind[i]+1)
			else:
				c += (ind[i]-ind[i-1])*(n-ind[i]+1)
			# print(c)
		return c



for _ in range(int(input())):
	n = int(input())
	s,x = input().split()
	# l = ss(s)
	# print(*l)
	c = 0
	# for j in l:
	# 	if x in j:
	# 		# print(j)
	# 		c += 1
	# print(c)
	# print('---solved---')
	print(sol(s))