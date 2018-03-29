#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Tue Dec 26 08:57:15 2017

@author: ashwin
"""

import random

def noReplacementSimulation(numTrials):
    '''
    Runs numTrials trials of a Monte Carlo simulation
    of drawing 3 balls out of a bucket containing
    3 red and 3 green balls. Balls are not replaced once
    drawn. Returns the a decimal - the fraction of times 3 
    balls of the same color were drawn.
    '''
    # Your code here
    a = ['r','r','r','g','g','g']
    l = a[:]
    y = []
    p = 0
    for i in range(numTrials):
        x = random.choice(l)
        l.remove(x)
        y.append(x)
        x = random.choice(l)
        l.remove(x)
        y.append(x)
        x = random.choice(l)
        l.remove(x)
        y.append(x)

        if y == ['r','r','r'] or y == ['g']*3:
            p += 1
        y = []
        l = a[:]
        
    return p/numTrials
            