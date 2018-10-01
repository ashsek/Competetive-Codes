def count(n):
	c = 0
	while(n>0):
		if n%10 == 3:
			c+=1
		n = n//10
	return c

for _ in range(int(input())):
	n = int(input())
	n+=1
	while(count(n) <= 2):
		n += 1
	print(n)