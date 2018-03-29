#Works only for small inputs ,not for large data set.
# updated :- Here we basically changed all the leading integers from when it starts
# deviating from tidy numbers and just subtract 1 and we will get our answer easily.
for j in range(int(input())):
    o = int(input()) # last number to be counted.
    if o < 10:
        print("Case #"+ str(j+1) +": " + str(o))
    else:
        s = 0
        n = list(map(int,list(str(o))))
        for i in range(1,len(n)):
        	if n[i] < n[s]:
        		break
        	elif n[i] > n[s]:
        		s = i
        for k in range(s+1,len(n)):
        	n[k] = 0
        p = 0
        for d in n:
        	p = p*10 + d

        print("Case #"+ str(j+1) +": " + str(p-1))