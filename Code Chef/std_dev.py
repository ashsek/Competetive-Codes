#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Tue Dec 26 08:54:02 2017

@author: ashwin
"""

def stdDevOfLengths(x):
    '''
    takes in a list of strings, L, 
    and outputs the standard deviation of the lengths of the strings.
    Return float('NaN') if L is empty.
    '''
    if len(x) == 0:
        return float('NaN')
    s = 0.0
    for i in x:
        s += len(i)
    mean = s/float(len(x))
    tot = 0.0
    for i in x :
        tot += (len(i) - mean)**2
    var = tot/float(len(x))
    std = var**0.5
    print(std)
    return std

#example
#stdDevOfLengths(['hi','my','name','is','ashwin'])