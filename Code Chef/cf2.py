# for _ in range(int(input())):
# 	n,s,t = map(int,input().split())
# 	# if n == 1:
# 	# 	# if(s+t == 2):
# 	# 		print(1)
# 	# elif n == 2:
# 	# 	if (s+t == 2*n):
# 	# 		print(1)
# 	# 	else:
# 	# 		print(2)
# 	if (s+t == 2*n):
# 		print(1)
# 	else:
# 		print(min(s,t)+1)			

n = int(input())
s = str(input())
m = int(input())
x = [0]*26

for i in range(m):
	s2 = str(input())
	for j in s2:
		x[ord(j) - ord('a')] += 1
# 	# print(x)
# 	# s3 = sorted(s2)
	count = 0
	for i in range(n):
		if x[ord(s[i]) - ord('a')] >0:
			x[ord(s[i])-ord('a')] -= 1
			count += 1
		if count == len(s2):
			print(i+1)
			break
		# if len(s2) == 0:
		# 	print(i+1)
		# 	break

		# s4 = sorted(s[:n])
		# if s4 == s3:
			# print(i+1)
			# break