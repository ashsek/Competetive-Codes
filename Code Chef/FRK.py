n = 0
for i in range(int(input())):
	u = str(input())
	l = ["chef","ch","he","ef","che","hef"]
	for j in range(len(u)):
		if u[j:j+2] in l or u[j:j+3] in l or u[j:j+4] in l:
			n += 1
			break
print(n)