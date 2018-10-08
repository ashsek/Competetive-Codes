import math
j =  int(input())
k = math.log(j,2)
if 2**k == int(j):
	print("TAK")
else:
	print("NIE")