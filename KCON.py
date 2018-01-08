#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Sun Jan  7 08:20:01 2018

@author: ashwin
Input
The first line of the input contains a single integer T denoting the number of test cases.
 The description of T test cases follows.
The first line of each test case contains two space-separated integers N and K.
The second line contains N space-separated integers A0, A1, ..., AN-1.

Output
For each test case, print a single line containing the maximum subarray sum of B.

Input:

2
2 3
1 2
3 2
1 -2 1

Output:

9
2
"""
#def suml(l):
#    best = cur = l[0]
#    for i in range(len(l)):
#        cur = max(cur + l[i], l[i])
#        best = max(best, cur)
#    return best
def suml(A):
    y = A[:]
    y.sort()
    max_so_far = max_ending_here = 0
    for x in A:
        max_ending_here = max(0, max_ending_here + x)
        max_so_far = max(max_so_far, max_ending_here)

    if max_so_far == 0 and y[-1] < 0:
        return y[-1]
    return max_so_far

for i in range(int(input())):
    n,k = list(map(int,input().split()))
    a = list(map(int,input().split()))
    b = a*k
#    if suml(b) == 0:
#        print(sum(a))
#    else:
    print(suml(b))
    