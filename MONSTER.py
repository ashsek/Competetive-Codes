#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Sat Jan  6 14:44:52 2018

@author: ashwin
In this game, at the beginning, 
there are n monsters arranged in a row (numbered 0 through n-1 from left to right). 
The i-th monster initially has hi health points. A monster dies if its health points become ≤ 0.

Chef is going to perform q actions.
 For each action, Chef chooses two numbers x, y and shoots all living monsters whose index k
 satisfies k & x = k (& denotes the bitwise AND operator). Each monster he shoots loses y health points.

5
1 2 3 4 5
5
1 1
2 2
3 3
4 4
5 5

Output:

4
4
2
2
1
"""
n_mst = input()
h_mst = list(map(int,input().split()))
d_mst = []
d = 0
for i in range(int(input())):
    x,y = list(map(int,input().split()))
    m = 0
    while m < len(h_mst):
        if m & x == m and h_mst[m] != 0:
            h_mst[m] = h_mst[m] - y
        if h_mst[m] <= 0 and m not in d_mst:
            d_mst.append(m)
        m += 1
    print(len(h_mst)-len(d_mst))