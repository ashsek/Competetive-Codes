for _ in range(int(input())):
	n = int(input())
	a = list(map(int,input().split()))
	b = list(map(int,input().split()))
	if a[0] != 0 or b[n-1] != 0:
		print("No")
		continue
	if a[n-1]!=b[0]:
		print("No")
		continue
	f = 0
	for k in range(1,n-1):
		if a[k] + b[k] < a[n-1] or a[n-1] + b[k] < a[k] or a[n-1] + a[k] < b[k] or a[k] == 0 or b[k]==0:
			print("No")			
			f = 1
			break
	if f == 0:
		print("Yes")
	