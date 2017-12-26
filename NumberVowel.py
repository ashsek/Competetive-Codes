#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Tue Dec 26 07:12:56 2017

@author: ashwin
"""

def vowel():
    n = 0
    s = input('Enter the string in which you want to calculate the number of vowels :')
    for char in s.lower():
        if char == 'a' or char == 'e' or char == 'i'or char == 'o' or char == 'u':
            n += 1
    print('Number of vowels: = ',n)
    j = input("Do you want to try another string? (Reply with yes/no)")
    if j.lower() == 'yes':
        vowel()
    else:
        return "Thanks for using this :)"

vowel()