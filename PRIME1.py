#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Fri Jan  5 13:06:30 2018

@author: ashwin

Input
The first line contains t, the number of test cases (less then or equal to 10). 
Followed by t lines which contain two numbers m and n (1 <= m <= n <= 1000000000, n-m<=100000) 
separated by a space.

Output
For every test case print all prime numbers p such that m <= p <= n,
 one number per line. Separate the answers for each test case by an empty line.

Example
Input:
2
1 10
3 5

Output:
2
3
5
7

3
5
"""
p = [2,3,5,7]
isprime = True

for i in range(input()):
    m,n = list(map(int,input().split()))
    for k in range(m,n+1):
        if i > max(p):
            #
        else:
            for j in p:
                if p%j == 0:
                    isprime = True
                else:
                    isprime = False
            if isprime:
                p.append(i)
        
    