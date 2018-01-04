#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Thu Jan  4 20:59:46 2018

@author: ashwin
"""
#import sys
#sys.setrecursionlimit(1500000)
#dic = {0:1,1:1} 
#def fact(x):
#    if x in dic:
#        return int(dic[x])
#    else:
#        dic[x] = x*fact(x-1)
#        return int(dic[x])
#    
#def c(a,b):
#    if r > n / 2:
#         r = n - r
#    return int(fact(a)/(fact(b)*fact(a-b)))
def c(a,b):
    if b > a / 2:
         b = a - b
    s = 1
    for i in range(1,b+1):
        s *= a - b + i
        s /= i
    return int(s)

for i in range(int(input())):
    j,k = map(int,input().split())
    print(c(j-1,j-k))