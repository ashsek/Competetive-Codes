n = int(input())
s = list(map(int,input().split()))
z = s.count(0)
o = s.count(1)
k = 0
for i in range(n):
	k += 1
	if s[i] == 0:
		z -=1
	if s[i]  == 1:
		o -= 1
	if z == 0 or o == 0:
		break
print(k)