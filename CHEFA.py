#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""

Input
The first line of the input contains an integer T denoting the number of test cases. 
The description of T test cases follows.

The first line of each test case contains a single integer N denoting the number of piles.

The second line contains N space separated integers A1, A2, ..., AN denoting the number of stones in each pile.

Output
For each test case, output a single line containg the maximum number of stones that Chef can remove.

Constraints
1 ≤ Ai ≤ 109
Subtask 1 (35 points): T = 10, 1 ≤ N ≤ 1000
Subtask 2 (65 points): T = 10, 1 ≤ N ≤ 105
Example
Input:
2
3
1 2 3
3
1 2 1

Output:
4
3

"""
for i in range(int(input())):
    j = input()
    k = list(map(int,input().split()))
    chef = 0
    other = 0
    chance = 0
    while len(k) > 0:
        if chance%2 == 0:
            chef += max(k)
            k.remove(max(k))
        else:
            other += max(k)
            k.remove(max(k))
        chance += 1
    print(chef)