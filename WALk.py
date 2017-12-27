#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Wed Dec 27 14:28:06 2017

@author: ashwin

 Input
The first line of the input contains an integer T denoting the number of test cases. The description of T test cases follows.
The first line of each test case contains a single integer N denoting the number of segments. The second line contains N space-separated integers W1, W2, ..., WN denoting the attractiveness of shops.
 

Output
For each test case, output a single line containing the minimal possible velocity at the beginning.
 

Constraints
1 ≤ T ≤ 10
1 ≤ N ≤ 10^5
1 ≤ Wi ≤ 10^6
 

Example
Input:

2
5
6 5 4 3 2
5
3 4 3 1 1

Output:

6
5
"""
def maxfinder(l):
    j = len(l)
    k = j
    error = 0
    for i in l:
        if i > j:
            error += i - j
            j += i-j
        j -= 1
    return(k + error)
    
for i in range(int(input())):
    j = input()
    k = list(map(int,input().split()))
    print(maxfinder(k))
