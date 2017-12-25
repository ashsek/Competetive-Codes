#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Mon Dec 25 20:03:27 2017

@author: ashwin
"""
import random

Score_player = 0
score_computer = 0

def game():
    global Score_player
    global score_computer
    choice = input('Choose anyone rock, paper or scissors : ')
    Comp_choice = random.choice(['rock','paper','scissors'])
    print('Computer chose', Comp_choice)
    if (choice.lower() == 'rock' and Comp_choice.lower() == 'paper') or (choice.lower() == 'paper' and Comp_choice.lower() == 'scissors') or (choice.lower() == 'scissors' and Comp_choice.lower() == 'rock'):
        Score_player += 1
        print('Hurrah! Current game score = ',Score_player , '/' , score_computer )
    else:
        score_computer += 1
        print('Mayday! Current game score = ',Score_player ,'/',score_computer )
        

