for _ in range(int(input())):
	n = int(input())
	a = list(map(int,input().split()))
	b = list(map(int,input().split()))
	a.sort()
	b.sort()
	su = float(0)
	even1= []
	odd1 = []
	even2 = []
	odd2= []
	for i in range(n):
		su += (a[i]+b[i])/2
	# 	if(a[i]%2 == 0):
	# 		even1.append(a[i])
	# 	if(b[i]%2 == 0):
	# 		even2.append(b[i])
	# 	if(a[i]%2 != 0):
	# 		odd1.append(a[i])
	# 	if(b[i]%2 != 0):
	# 		odd2.append(b[i])
	# # even1,odd1=[i for i in a if i%2 != 0 ],[i for i in a if i%2 == 0]
	# # even2,odd2=[i for i in b if i%2 != 0 ],[i for i in b if i%2 == 0]
	# while(len(even1)>0 and len(even2)>0):
	# 	su += (even1[0]+even2[0])//2
	# 	even1.pop(0)
	# 	even2.pop(0)
	# while(len(odd1)>0 and len(odd2)>0):
	# 	su += (odd1[0]+odd2[0])//2
	# 	odd1.pop(0)
	# 	odd2.pop(0)
	# while(even1):
	# 	if(len(odd2)!=0):
	# 		su += (even1[0]+odd2[0])//2
	# 		even1.pop(0)
	# 		odd2.pop(0)
	# while(even2):
	# 	if(len(odd1)!=0):
	# 		su += (even2[0]+odd1[0])//2
	# 		even2.pop(0)
	# 		odd1.pop(0)
	if( su.is_integer() ):
		print(int(su-1))
	else:
		print(int(su))
	# while(even1):
