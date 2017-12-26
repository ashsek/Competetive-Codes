#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Tue Dec 26 08:20:18 2017

@author: ashwin
"""

def print_without_vowels(s):
    '''
    s: the string to convert
    Finds a version of s without vowels and whose characters appear in the 
    same order they appear in s. Prints this version of s.
    '''
    v = ''
    wv = ''
    listu = ['a','e','i','o','u']
    for k in range(len(s)):
        if s[k].lower() in listu:
            v = v + s[k]
        else:
            wv = wv + s[k]
            
    print(wv)