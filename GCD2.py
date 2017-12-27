#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Wed Dec 27 11:24:56 2017

@author: ashwin

int gcd(int a, int b)
{
	if (b==0)
		return a;
	else
		return gcd(b,a%b);
}
"""
def gcd(a,b):
    while a:
        a,b = b%a,a
    return b
for i in range(int(input())):
    a,b = list(map(int,input().split(' ')))
    print(gcd(a,b))