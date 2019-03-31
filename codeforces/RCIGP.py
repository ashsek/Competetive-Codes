n,k = list(map(int,input().split()))  #splitting the input to get n and k
lis = [] # list to store the binary strings 

def rcigp(s,n,k): # recursive function we are generating s 
	if n == 0 and k == 0:  # as both conditions should be true n should be 0 and we should have k 1's.
		# if s not in lis: #checking if we already found the string
			print(s)
			return
	if (k>0 and n>0):
		rcigp(s+'1',n-1,k-1)
	if (n>0):
		rcigp(s+'0',n-1,k)
	# return lis. #returns a list

s=""

print(rcigp(s,n,k))