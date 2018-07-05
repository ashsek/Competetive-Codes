j = int(input())
l = []
for i in range(1,int(j**0.5+1)):
	l.append(int(j/i -i +1))
print(int(sum(l)))