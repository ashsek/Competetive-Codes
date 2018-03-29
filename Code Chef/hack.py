#!/bin/python3

import sys

def diagonalDifference(l):
    # Complete this function
    d1 = 0
    d2 = 0
    for i in range(len(l)):
        for j in range(len(l)):
            if i == j:
                d1 += l[i][i]
            if j == len(l) - i -1:
                d2 += l[i][len(l)-i-1]
    return abs(d1-d2)

if __name__ == "__main__":
    n = int(input().strip())
    a = []
    for a_i in range(n):
       a_t = [int(a_temp) for a_temp in input().strip().split(' ')]
       a.append(a_t)
    result = diagonalDifference(a)
    print(result)
