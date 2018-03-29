#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Tue Jan 30 11:05:36 2018

@author: ashwin
36
6
98
25
97
24
25
70
50
71
30
14
28
100
3
26
61
98
50
41
5
3
28
34
0
"""

import sys
IndexError
def solve(grades):
    # Complete this function
    g = []
    
    for grade in grades:
        y = True
        if grade < 38:
            g.append(grade)
            y = False
        if y:
            for i in range(3):
                if grade%5 != 0:
                    grade += 1
                elif grade%5 == 0:
                    g.append(grade)
                    break
                if i == 2:
                    g.append(grade-3)
    return g

n = int(input().strip())
grades = []
grades_i = 0
for grades_i in range(n):
   grades_t = int(input().strip())
   grades.append(grades_t)
result = solve(grades)
print ("\n".join(map(str, result)))
