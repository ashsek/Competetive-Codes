#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Tue Dec 26 19:54:09 2017

@author: ashwin
"""

def palin(x):
    x = str(x)
    l = len(x)
    list1 = list(x)
    i = 0
    while i < l//2:
        if list1[i] != list1[l-i-1]:
            list1[l-i-1] = list1[i]
        i += 1
    str1 = int(''.join(list1))
    if str1 > int(x):
        print(str1)
        return str1
    else:
        palin(x + str(10**len(str(x))))