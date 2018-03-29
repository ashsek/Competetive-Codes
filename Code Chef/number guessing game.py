#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Tue Dec 26 07:35:59 2017

@author: ashwin

A number guessing game which utilises bisection search. Go ahead try playing with it :)
"""

import time 

def game():
    ma = 100
    mi = 0
    y = 50
    print('Please think of a number between 0 and 100!')
    time.sleep(1)
    print('Let me guess your number ')
    time.sleep(2)
    print('')
    print('Thinking')
    print('')
    time.sleep(1)
    print('Is your secret number 50?')
    while 1 < 2:
        print('=====================================================================')
        x = input("Enter 'h' to indicate if the guess is too high. Enter 'l' to indicate if the guess is too low. Enter 'c' to indicate that I guessed correctly. :")
        z = x.lower()
        if z == 'h':
            ma = y
            y = int((ma+mi)/2)
            print('Let me guess your number ')
            time.sleep(1)
            print('')
            print('Thinking')
            print("")
            print("Is your secret number ", y,'?')
        elif z == 'l':
            mi = y
            y = int((ma+mi)/2)
            print('Let me guess your number ')
            time.sleep(1)
            print('')
            print('Thinking')
            print("")
            print("Is your secret number ", y,'?')
        elif z != 'h' and z != 'l' and z != 'c' :
            print("")
            print('Sorry, I did not understand your input.')
            print("Is your secret number ", y,'?')
        elif z == 'c':
            break
    print("")    
    print('Game over. Your secret number was:' ,y)
    z = input("Wanna Play again? ")
    if z.lower() == 'yes':
        game()
    elif z.lower() == 'no':
        print("Thanks for playing :), Have a nice day!")
game()
        
        