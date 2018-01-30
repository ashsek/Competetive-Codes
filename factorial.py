#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Tue Jan 30 20:15:45 2018

@author: ashwin
"""

d = {}
def extraLongFactorials(n):
    # Complete this function
    global d
    if n in d:
        return d[n]
    if n == 0 or n ==1:
        return 1
    else:
        d[n] = n*extraLongFactorials(n-2)
        return d[n]