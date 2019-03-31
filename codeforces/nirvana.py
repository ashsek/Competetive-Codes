def sd(a) : 
	sm = 0
	while (a) : 
		sm = sm + a%10
		a = a//10
	return sm 

def pro(n):
	pro = 1
	while(n>0):
		pro *= n%10
		n = n//10
	return pro

def findpro(x) : 
	b = 1
	ans = x 
	while (x!=0) : 
		cur = (x - 1) * b + (b - 1) 
		if (pro(cur) > pro(ans) or (pro(cur) == pro(ans) and cur > ans)): 
				ans = cur 
		x = x//10
		b = b*10
	return ans 

n = int(input())
print(pro(findpro(n))) 