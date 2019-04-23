t = int(input())
for z in range(t):
	number = int(input())

	lis1 = []

	flag = 1

	for i in range(number):
		lis2 = list(map(int,input().split()))
		lis1.append(lis2)

	lis3 = []

	lis5 = []

	for po in range(number):
		lis5.append(po)

	lis5.sort()

	lis5 = list(set(lis5))

	lis4 = []

	for j in range(number):

		for i in range(number):
			if lis1[j][i] == 0:

				lis3.append(j)
				lis4.append(i)

	lis3.sort()

	lis4.sort()

	lis3 = list(set(lis3))

	lis4 = list(set(lis4))


	if lis3 == lis5 and lis4 == lis5:
		print('YES') 
	else:
		print('NO')
