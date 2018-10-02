for _ in range(int(input())):
	d = int(input())
	print(d%9+1)
	# su = 0
	# if d < 9:
	# 	print(d+1)
	# elif d%9 == 0:
	# 	print(1)
	# else:
	# 	d+=1
	# 	while(d>0):
	# 		su += d%10
	# 		d = d//10
	# 	print(su)