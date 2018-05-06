def binary_search(l,n,x):
	low = 1
	high = n
	while low <= high:
		mid = (low + high)//2
		if a[mid] == x:
			break
		elif a[mid]<x:
			low = mid + 1
		else:
			high = mid - 1 

for i in range(int(input())):
	n,q = input().split()
	a = list(map(int,input().split()))
	for j in range(int(q)):
		x = int(input())
		# minimum swaps or -1 if impossible,
		binary_search(a,n,x)