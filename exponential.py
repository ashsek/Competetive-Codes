#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Tue Dec 26 07:51:39 2017

@author: ashwin
"""

def iterPower(base, exp): # uses iteration to find answer
    '''
    base: int or float.
    exp: int >= 0
 
    returns: int or float, base^exp
    '''
    # Your code here
    y = base
    if exp == 0:
        return 1
    while exp > 1:
        base = base*y
        exp -= 1
    return base

def recurPower(base, exp): # uses recursion to find power 
    if exp == 0:
        return 1
    else:
        return base*recurPower(base, exp -1)