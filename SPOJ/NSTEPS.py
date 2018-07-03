# both equal
# y value 2 less
# else print No Number
# when both odd we have x+y -1
# when both even we just sum them 

for i in range(int(input())):
	x,y = list(map(int,input().split()))
	if x == y or x-y == 2:
		#do it
		if x%2 == 0 or y%2 == 0:
			print(x+y)
		else:
			print(x+y-1)
	else:
		print('No Number')
