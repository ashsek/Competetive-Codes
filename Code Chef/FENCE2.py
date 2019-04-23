# def dfs(a,b):
# 	global s
# 	global fence
# 	if visited[a][b] == 1: return
# 	visited[a][b] = 1
# 	s -= 1
# 	s = max(s,0)
# 	# if a>=1:
# 	if f[max(0,a-1)][b] == 0:
# 		fence += 1
# 	if f[min(a+1,n-1)][b] == 0:
# 		fence += 1
# 	if f[a][max(0,b-1)] == 0:
# 		fence += 1
# 	if f[a][min(b+1,m-1)] == 0:
# 		fence += 1
# 	if a == 0 or a == n-1:
# 		fence += 1
# 	if b == 0 or b == m-1:
# 		fence += 1
# 	ae = [max(0,a-1), min(a+1,n-1),a,a]
# 	be = [b,b,max(0,b-1),min(b+1,m-1)]
# 	for i in range(4):
# 		if f[ae[i]][be[i]] == 1 and visited[ae[i]][be[i]]==1:
# 			dfs(ae[i],be[i])

# 	# if a == 0 or a == 1:
# 		# fence += 1
# def bf():
# 	#checking on right and left
# 	global fence
# 	global n
# 	global m
# 	if n != 1 and m!=1:
# 		for i in range(n):
# 			for j in range(m):
# 				if f[i][j] == 1:
# 					if i == 0:
# 						if j == 0:
# 							fence += 2
# 							if f[i][j+1] == 0:
# 								fence +=1
# 							if f[i+1][j] == 0:
# 								fence += 1
# 							continue
# 						if j == m-1:
# 							fence += 2
# 							if f[i][j-1] == 0:
# 								fence += 1
# 							if f[i+1][j] == 0:
# 								fence += 1
# 							continue
# 						# fence += 3
# 						fence += 1
# 						if f[i][j-1] == 0:
# 							fence += 1
# 						if f[i+1][j] == 0:
# 							fence += 1
# 						if f[i][j+1] == 0:
# 							fence += 1
# 						continue

# 					if i == n-1:
# 						#last row
# 						if j == 0:
# 							fence += 2
# 							if f[i][j+1] == 0:
# 								fence +=1
# 							if f[i-1][j] == 0:
# 								fence += 1
# 							continue
# 						if j == m-1:
# 							fence += 2
# 							if f[i][j-1] == 0:
# 								fence += 1
# 							if f[i-1][j] == 0:
# 								fence += 1
# 							continue
# 						fence += 1
# 						if f[i][j-1] == 0:
# 							fence += 1
# 						if f[i-1][j] == 0:
# 							fence += 1
# 						if f[i][j+1] == 0:
# 							fence += 1
# 						continue

# 					if j == 0:
# 						fence += 1
# 						if f[i-1][j] == 0:
# 							fence += 1
# 						if f[i+1][j] == 0:
# 							fence += 1
# 						if f[i][j+1] == 0:
# 							fence += 1
# 						continue

# 					if j == m-1:
# 						fence += 1
# 						if f[i-1][j] == 0:
# 							fence += 1
# 						if f[i+1][j] == 0:
# 							fence += 1
# 						if f[i][j-1] == 0:
# 							fence += 1
# 						continue

# 					if f[i][j+1] == 0:
# 						fence += 1
# 					if f[i-1][j] == 0:
# 						fence += 1
# 					if f[i+1][j] == 0:
# 						fence += 1
# 					if f[i][j-1] == 0:
# 						fence += 1
# 	else:
# 		if n == 1 and m!= 1:
# 			#do soemthing
# 			n = n-1
# 			for j in range(m):
# 				if j == 0:
# 					# fence += 3
# 					if f[n][j] == 1:
# 						fence += 3
# 						if f[n][j+1] == 0:
# 							fence+= 1
# 					continue
# 				if j == n-1:
# 					if f[n][j] == 1:
# 						fence+=3
# 					continue

# 				# fence +=2
# 				if f[n][j] == 1:
# 					fence +=2
# 					if f[n][j+1] == 0:
# 						fence +=1
# 					if f[n][j-1] == 0:
# 						fence += 1


# 		if m == 1 and n!= 1:
# 			m = m-1
# 			#do something
# 			for j in range(n):
# 				if j == 0:
# 					# fence += 3
# 					if f[j][m] == 1:
# 						fence += 3
# 						if f[j+1][m] == 0:
# 							fence+= 1
# 					continue
# 				if j == n-1:
# 					if f[j][m] == 1:
# 						fence+=3
# 					continue

# 				# fence +=2
# 				if f[j][m] == 1:
# 					fence +=2
# 					if f[j+1][m] == 0:
# 						fence +=1
# 					if f[j-1][m] == 0:
# 						fence += 1
# 		if m ==1 and n ==1:
# 			fence +=4 



	#done

for _ in range(int(input())):
	n,m,k = list(map(int,input().split()))
	s = k
	fence = 0
	a1 = []
	b1 = []
	for _ in range(k):
		a,b = list(map(int,input().split()))
		a1.append((a,b,))
		b1.append((b,a,))
	a1.sort()
	b1.sort()
	print(a1)
	print(b1)
	for i in range(k-1):
		print(i)
		# print(a)
		fence += 4
		if a1[i][0] == a1[i+1][0]:
			if a1[i+1][1] - a1[i][1] == 1:
				print('hel')
				print(fence)
				fence -= 2
	fence += 4
	
	for i in range(k-1):
		# fence += 4
		if b1[i][0] == b1[i+1][0]:
			if b1[i+1][1] - b1[i][1] == 1:
				fence -= 2

	print(fence)
