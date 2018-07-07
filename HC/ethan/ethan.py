# a,b => Trure if A is substring of B;
# 1 indexed;
#1. i,j == 1
# 2. i > len(A) => True;
# 3. j > len(B) => False;
# 4. A[i] == B[j] increase by 1 each and go to step 2;
# 5. i =1 then increase j by 1 go to 2;
# 6. set i = 1 and return to 2;
# find cases where algo go's wrong;
# impossible is possible
#76XZYXYZXYZXZYXYZXYZYX
# A = 'ABACUS'
# B = 'ABABACUS'
# A = 'XYZXZYX'
#B = 'XZYXYZXYZXZYX'
# B = 'XYZXYZXZYX'
# A = 'FACEBOOK' works for FAFCEBOOK
# B = 'FAFACEBOOK' FAFAFCEBOOK

#B = 'XXYZXZYXYZXZYX'
def func(A,B):
	l = []
	i,j = 0,0
	while True:
		if i > len(A)-1:
		    return True
		if j > len(B)-1:
		    return False
		if A[i] == B[j]:
		    l.append((i,j,))
		    i += 1
		    j += 1
		    continue
		if i == 0:
		    j += 1
		else:
		    i = 0
for i in range(int(input())):
	A = input()
	B = ''
	y = True
	if A.count(A[0]) > 1:
		for k in A:
			if k == A[0]:
				if not y:
					break
				y = False
			B += k
		B += A
	else:
		B = A
	if not func(A,B):
		#do something when true
		print('Case #'+str(i+1)+':', B)

	else:
		print('Case #'+str(i+1)+':'+' Impossible')


