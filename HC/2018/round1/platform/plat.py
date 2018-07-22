# N platforms
# Hi is initial height of platform
# M parkourists on stage
# ith start at Ai to reach Bi. if Bi > Ai jump to right else jump to left.
#ith max Ui and Di; only move from x to y iff Hx - Di <= Hy <= Hx + Ui  
# adjust height of platform at rate of 1m/sec  total time will be max{|Hi - Pi|}
# find minimum time for parkoursists 
# given H1 and H2 
# caluclate H3,4.... by (W*hi-2+X*Hi-1 + y)%Z
for t in range(int(input())):
	n,m = list(map(int,input().split()))
	h1,h2,w,x,y,z = list(map(int,input().split()))
	A = []
	B = []
	U = []
	D = []
	H = [0]*n
	H[0] = h1
	H[1] = h2
	for i in range(2,n):
		H[i] = (w*H[i-2] + x*H[i-1] + y)%z
	for j in range(m):
		a,b,u,d = list(map(int,input().split()))
		A.append(a)
		B.append(b)
		U.append(u)
		D.append(d)
	print('H:',H)
	print('A:', A)
	print('B:',B)
	print('U:',U)
	print('D:',D)
