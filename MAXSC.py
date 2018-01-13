#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Fri Jan  5 16:19:11 2018

@author: ashwin
You are given N integer sequences A1, A2, ..., AN. 
Each of these sequences contains N elements. You should pick N elements, 
one from each sequence; let's denote the element picked from sequence Ai by Ei.
 For each i (2 ≤ i ≤ N), Ei should be strictly greater than Ei-1.
 Ei should be strictly greater than Ei-1.

Compute the maximum possible value of E1 + E2 + ... + EN.
 If it's impossible to pick the elements E1, E2, ..., EN, print -1 instead.
Input
The first line of the input contains a single integer T denoting the number of test cases. 
The description of T test cases follows.
The first line of each test case contains a single integer N.
N lines follow. For each valid i, 
the i-th of these lines contains N space-separated integers Ai1, Ai2, ..., 
AiN denoting the elements of the sequence Ai.
Output
For each test case, print a single line containing one integer — the maximum sum of picked elements.

Constraints
1 ≤ T ≤ 10
1 ≤ N ≤ 700
1 ≤ sum of N in all test-cases ≤ 3700
1 ≤ Aij ≤ 109 for each valid i, j
Subtasks
Subtask #1 (18 points): 1 ≤ Aij ≤ N for each valid i, j

Subtask #2 (82 points): original constraints

Example
Input:

1
3
1 2 3
4 5 6
7 8 9

Output:

18


1 3 5

1 2 4

3 1 0


"""
def maf(li):
    k = len(li)
    p = 0
    q = 1
    y = True
    l = []
            
    while y: 
        
        while li[p][0] >= li[p+q][0] and p < k-1:        
            li[p].remove(li[p][0])
            if len(li[p]) == 0:
                return -1
            if p+q < len(li[p]):
                q += 1
        
        for o in range(k):
            ma_x[o] = li[o][0]
            
        l = ma_x[:]
        l.sort()
        if ma_x == l:
            break
        
        else:
            if p +1 <= len(li[p]):
                p += 1
                q = 0     
    
#    print(ma_x)
    return sum(ma_x)
  
for o in range(int(input())):
    n = int(input())
    l = []
    ma_x = [0]*n
    for j in range(n):
        y = list(map(int,input().split()))
        y.sort(reverse = True)
        l.append(y)
    print(maf(l))
#BufferError,LookupError,EOFError,AttributeError
        
        


