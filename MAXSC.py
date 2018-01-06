#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Fri Jan  5 16:19:11 2018

@author: ashwin
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
"""
l = []
for i in range(int(input())):
    for i in range(int(input())):
        l.append(max(list(map(int,input().split()))))
    print(sum(l))
        


