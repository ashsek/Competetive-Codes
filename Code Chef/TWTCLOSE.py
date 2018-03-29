#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Thu Dec 28 12:48:28 2017

@author: ashwin
Input
First line contains two integers N K, the number of tweets (numbered 1 to N) and the number of clicks respectively (1 ≤ N, K ≤ 1000). Each of the following K lines has one of the following.
CLICK X , where X is the tweet number (1 ≤ X ≤ N)
CLOSEALL

Output
Output K lines, where the ith line should contain the number of open tweets just after the ith click.

Example
Input:
3 6
CLICK 1
CLICK 2
CLICK 3
CLICK 2
CLOSEALL
CLICK 1

Output:
1
2
3
2
0
1

"""
a,b = map(int,input().split())
op = 0
l = [0]*a
while b:
    j = input().split()
    if len(j) == 2:
        if l[int(j[1])-1] == 0:
            l[int(j[1])-1] = 1 
            op += 1
        else:
            l[int(j[1])-1] = 0
            op -= 1
    if len(j) == 1:
        l = [0]*a
        op = 0
    b -= 1
    print(op)
            