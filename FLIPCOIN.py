#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Thu Jan 25 19:15:53 2018

@author: ashwin
There are N coins kept on the table, numbered from 0 to N - 1. 
Initially, each coin is kept tails up. You have to perform two types of operations:

1) Flip all coins numbered between A and B inclusive. 
    This is represented by the command "0 A B"

2) Answer how many coins numbered between A and B inclusive are heads up.
    This is represented by the command "1 A B".

Input :

The first line contains two integers, N and Q.
 Each of the next Q lines are either of the form "0 A B" or "1 A B" as mentioned above.

Output :

Output 1 line for each of the queries of the form "1 A B" 
containing the required answer for the corresponding query.

Sample Input :
4 7
1 0 3
0 1 2
1 0 1
1 0 0
0 0 3
1 0 3 
1 3 3

Sample Output :
0
1
0
2v
1
"""

n,q = map(int,input().split())
c = [0]*n
for i in range(q):
    j,k,l = list(map(int,input().split()))
    co = 0 
    if j == 1:
        #do Something
        for m in range(k,l+1):
            if c[m] == 1:
                co += 1
        print(co)
    if j == 0:
        #do something
        for m in range(k,l+1):
            if c[m] == 1:
                c[m] = 0
            else:
                c[m] = 1