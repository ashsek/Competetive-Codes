def sub_lists(list1):
 
    # store all the sublists 
    sublist = [[]]
     
    # first loop 
    for i in range(len(list1)):
         
        # second loop 
        for j in range(i + 1, len(list1)):
             
            # slice the subarray 
            sub = list1[i:j]
            sublist.append(sub)
             
     
    return sublist
 
for _ in range(int(input())):
	n,m = list(map(int,input().split()))
	l1 = list(map(int,input().split()))
	l2 = 