#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Mon Dec 25 20:03:27 2017

@author: ashwin
"""
import random

Score_player = 0
score_computer = 0

def rematch():
    global Score_player
    global score_computer
    rmatch = input('Do you want a rematch? (Reply with yes or no)')
    if rmatch.lower() == 'yes':
        print('<====================REMATCH=======================>')
        game()
    elif rmatch.lower() == 'no':
        new_game = input('Do you want to play a new game? (Reply with yes or no')
        if new_game.lower() == 'yes':
            print('<====================New Game======================>')
            Score_player = 0
            score_computer = 0
            game()
        else:
            print(' Thanks for playing ! Have a nice day :)')
    else:
        print('Error!, Please chose from any one options')
        rematch()
        
    
def game():
    global Score_player
    global score_computer
    choice = input('Choose anyone rock, paper or scissors : ')
    Comp_choice = random.choice(['rock','paper','scissors'])
    print('Computer chose', Comp_choice)
    if (choice.lower() == 'rock' and Comp_choice.lower() == 'paper') or (choice.lower() == 'paper' and Comp_choice.lower() == 'scissors') or (choice.lower() == 'scissors' and Comp_choice.lower() == 'rock'):
        Score_player += 1
        print('Hurrah! Current game score = ',Score_player , '/' , score_computer )
    elif choice.lower() == Comp_choice.lower():
        print('Its a draw',Score_player ,'/',score_computer )
    else:
        score_computer += 1
        print('Mayday! Current game score = ',Score_player ,'/',score_computer )
    rematch()
        
game()