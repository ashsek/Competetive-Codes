d = {1:1,2:2,3:6}
def factorial(j):
	if j in d.keys():
		return d[j]
	else:
		return j*factorial(j-1)
for i in range(int(input())):
	print(factorial(int(input())))
