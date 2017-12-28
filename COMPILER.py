#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Thu Dec 28 11:45:14 2017

@author: ashwin

Given some expressions which represent some instructions to be analyzed by Lira's compiler, you should tell the length of the longest prefix of each of these expressions that is valid, or 0 if there's no such a prefix.

Input
Input will consist of an integer T denoting the number of test cases to follow.

Then, T strings follow, each on a single line, representing a possible expression in L++.

Output
For each expression you should output the length of the longest prefix that is valid or 0 if there's no such a prefix.

Constraints
1 ≤ T ≤ 500
1 ≤ The length of a single expression ≤ 106
The total size all the input expressions is no more than 5*106
 

Example
Input:
3
<<>>
><
<>>>
Output:
4
0
2
"""
l=int(input())
while l:
    l -= 1
    exp = input()
    k = n = 0
    for i in range(len(exp)):
        if exp[i] == "<":
            k += 1
        else:
            k -= 1
        if k < 0:
            break
        if k == 0:
            n = i+1
    print(n) 