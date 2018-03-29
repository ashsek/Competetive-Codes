for i in range(int(input())):
	n = int(input()) # last number to be counted.
	if n < 10:
        print("Case #"+ str(i+1) +": " + str(n))
    else:
        j = list(str(n))
        j2 = j[:]
        j2.sort()
        while j != j2 and n > 9:
            n -= 1
            j = list(str(n))
            j2 = j[:]
            j2.sort()
        print("Case #"+ str(i+1) +": " + str(n))