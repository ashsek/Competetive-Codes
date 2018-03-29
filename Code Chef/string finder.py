#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Tue Dec 26 07:23:37 2017

@author: ashwin
"""
def number():
    s = input("Enter the string in which you want to search :")
    s1 = input("Enter the string which you want to search :")
    n= 0
    i = 0
    for i in range(0,len(s)):
        if s[i:i+len(s1)] == s1 :
            n += 1
            i += 1
    print ('Number of times', s1 ,'occurs is:',n)
    u = input("Do you want to try another number? (Reply with yes/no)")
    if u.lower == 'yes':
        number()
number()