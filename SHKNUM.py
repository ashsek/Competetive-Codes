import math
for _ in range(int(input())):
	n = int(input())
	if n == 1:
		print('2')
		continue
	pow2 = int(math.log2(n))
	rem = n - 2**pow2
	if rem != 0:
		pow23 = int(math.log2(rem))
	else:
		pow23 = 0
	if pow23 +1 != pow2 or abs(n - (2**pow2 + 2**pow23)) < abs(2**pow2 + 2**(pow23+1) - n):
		print('========NUM==========')
		print(2**pow2)
		print(2**pow23)
		print('=========Diff=========')

		print(min(abs(n - (2**pow2 + 2**pow23)), abs(2**pow2 + 2**(pow23+1) - n)))
		print('======END============')

	else:
		pow2 += 1
		rem = abs(n - 2**(pow2))
		if rem != 0:
			pow23 = int(math.log2(rem))
		else:
			pow23 = 0
		print('=======NUM===========')
		print(2**pow2)
		print(2**pow23)
		print('=======DIFF===========')

		print(min(abs(n - (2**pow2 + 2**pow23)), abs(2**pow2 + 2**(pow23+1) - n)))
		print('=========END=========')
