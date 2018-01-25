#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Mon Jan 22 18:38:38 2018

@author: ashwin
"""

import requests, webbrowser, bs4

j = input()
res = requests.get('http://google.com/search?q=' + j)

res.raise_for_status()

soup = bs4.BeautifulSoup(res.text,"lxml")

linkElems = soup.select('.r a')

numOpen = min(5, len(linkElems))

for i in range(numOpen):
    webbrowser.open('http://google.com' + linkElems[i].get('href'))