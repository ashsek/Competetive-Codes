import math

    def prettyPrint(A):
        le = 2*A-1
        ans = [0]*le
        a = [A]*le
        mid = math.ceil(le/2)
        for i in range(mid):
            l2 = le-2*i
            for j in range(i,le-i):
                a[j] = A-i 
            ans[i] = a[:]
            ans[le-i-1] = a[:]        
        return ans
    print(prettyPrint(4))
