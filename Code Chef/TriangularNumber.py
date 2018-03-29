#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Tue Dec 26 08:10:56 2017

@author: ashwin
"""

n = 1
y = 2
def is_triangular():
    """
    k, a positive integer
    returns True if k is triangular and False if not
    """
    print('')
    k = int(input('Enter a number which you want to check as triangular number :'))
    
    global n
    global y
    
    while n < k:
        n += y
        y += 1
        if n == k:
            n = 1
            y = 2
            print('Yes, It is a triangular number')
            return True
        else:
            n = 1
            y = 2
            print('No, It is not a triangular number')
            return False

is_triangular()