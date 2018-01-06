#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Fri Jan  5 15:34:07 2018

@author: ashwin
Input:

3
1 1 2 2
3 2 2 3
1 2 2 2
"""

for i in range(int(input())):
    Y = list(map(int,input().split()))
    Y.sort()
    a,b,c,d = Y
    if Y[0] == Y[1] and Y[2] == Y[3]:
        print("YES")
    else:
        print("NO")