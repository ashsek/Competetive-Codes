#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Sat Jan 27 20:21:16 2018

@author: ashwin

Input:

2
2
1 2
5
7 4 3 2 6

Output:

2
1
"""
#def la(u):
#    for j in range(len(u)):
#        for k in range(len(u)):
#            if k < len(u) and j < len(u):
#                if j != k and (u[j] + u[k])%2 == 0:
#                    u.remove(u[j])
#                    u.remove(u[k])
#    return len(u)
#    
#    
    
for i in range(int(input())):
    q = input()
    u = list(map(int,input().split()))
    t = 0
    e = 0
#    for j in range(len(u)):
#        if len(u) == 1:
#            break
#        k = len(u)-1
#        while k:
#            if k < len(u) and j < len(u):
#                if j != k and (u[j] + u[k])%2 == 0:
#                    t = u[j]
#                    e = u[k]
#                    u.append(u[j] + u[k])
#                    u.remove(t)
#                    u.remove(e)
#                    k = len(u) - 1
#                else:
#                    k -= 1
#            elif len(u) == 1:
#                break
#                
#            else:
#                k -= 1
##    print(u)                
#    print(len(u))
    if sum(u)%2 == 0:
        print(1)
    else:
        print(2)