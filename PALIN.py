#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Tue Dec 26 19:54:09 2017

@author: ashwin

Input
The first line contains integer t, the number of test cases. Followed by t lines containing integers K.

Output
For each K, output the smallest palindrome larger than K.

Example
Input:
2
808
2133
Output:
818
2222
"""
# Does work currently 
def palin(x):
    x = str(x)
    y = list(x)
    list1 = y
    if len(y)%2 == 0:
        list1 = y[:len(y)//2] + list(reversed(y[:len(y)//2]))
    else:
        list1 = y[:len(y)//2+1] + list(reversed(y[:len(y)//2]))
    str1 = int(''.join(list1))
    if str1 == int(x):
        print(str1 + 10**((len(x)-1)//2))
    if str1 > int(x):
        print(str1)
    elif str1 < int(x):
        palin(str1 + int(10**((len(x)-1)//2+1)))
   
for i in range(int(input())):
    palin(input())