#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Mon Dec 25 20:41:51 2017

@author: ashwin
"""

def triplet(a,b,c):
    List = [a,b,c]
    List.sort()
    if List[2]**2 == List[1]**2 + List[0]**2:
        print("Yes it is a pythagorean triplet")
    else:
        print("Its not a pythagorean Triplet")
        
print("Use triplet(first number, second number, third number)")
