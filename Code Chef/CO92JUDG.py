#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Thu Mar 29 16:19:15 2018

@author: ashwin
The first line of the input contains a single integer T denoting the number of test cases.
 The description of T test cases follows.
The first line of each test case contains a single integer N.
The second line contains N space-separated integers A1, A2, ..., AN.
The third line contains N space-separated integers B1, B2, ..., BN.
______________
Output
For each test case, print a single line containing the string "Alice" if Alice wins, 
"Bob" if Bob wins or "Draw" if the result is a draw (without quotes).
"""

for i in range(int(input())):
    n = int(input())
    a = list(map(int,input().split()))
    b = list(map(int,input().split()))
    if sum(a) - max(a) > sum(b)  - max(b):
        print("Bob")
    elif sum(b) - max(b) > sum(a)  - max(a):
        print("Alice")
    else:
        print("Draw")