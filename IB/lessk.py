def ispalin(self, s):
    s2 = s[::-1]
    # s2.reverse()
    if s == s2:
        return 1
    return 0

def solve(self, A):
    k = len(A)
    if self.ispalin(A):
        return 0
    for i in range(k):
        if self.ispalin(A[k-i-1:]+A):
            return i+1