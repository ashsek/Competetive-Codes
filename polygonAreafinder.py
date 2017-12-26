#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Tue Dec 26 08:05:33 2017

@author: ashwin
"""

import math as ma
def polysum(n,s):
    '''
    Takes in 2 parameters 
    n - number of sides
    s - side length
    and calulates area and perimeter for a regular polygon 
    '''
    ara = (0.25*n*(s**2))/ma.tan(ma.pi/n)
    peri = s*n
    print(" Area of polynomial :", ara)
    print("perimeter :", peri)