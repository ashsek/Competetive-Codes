def bubbleSort(arr,t):
	n = len(arr)
	arr2 = arr[:]
	arr2.sort()
# Traverse through all array elements
	for i in range(n-2):
 
        # Last i elements are already in place
		for j in range(0, n-i-2):
 
            # traverse the array from 0 to n-i-1
            # Swap if the element found is greater
            # than the next element
			if arr[j] > arr[j+2] :
				arr[j], arr[j+2] = arr[j+2], arr[j]
		if arr == arr2:
			print('Case #'+str(t)+ ': OK')
			break
	if arr != arr2:
		for k in range(n-1):
			if arr[k] > arr[k+1]:
				print('Case #'+str(t)+ ': ' + str(k))
				break
io = input()   	
for j in range(int(io)):
	n = int(input())
	v = list(map(int,input().split()))

	bubbleSort(v,j)