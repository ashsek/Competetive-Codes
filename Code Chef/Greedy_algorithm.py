#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Tue Dec 26 08:46:57 2017

@author: ashwin
"""
def greedy_transport(items,limit=10):
    """
    Parameters:
    items - a dictionary of name (string), weight (int) pairs
    limit - weight limit of the vehicle (an int)
    
    Returns:
    A list of lists, with each inner list containing the names of items
    transported on a particular trip and the overall list containing all the
    trips
    """
    # TODO: Your code here
    trip = []
    final_list = []
    w = 0
    y = 0
    items2 = items.copy()
    while len(items2) > 0:
        if w < limit and len(items2) != 0:
            y =  max(items2.values())
            if w + y < limit:
                w += y
                trip.append(list(items2.keys())[list(items2.values()).index(y)])
                items2.pop(list(items2.keys())[list(items2.values()).index(y)])
        
            items3 = items2.copy()
         #   print('pass 1')
            while w <= limit and len(items3) > 0:
                z = max(items3.values())
         #       print('get lost')
                
                if z + w > limit:
             #       print('here')
                    items3.pop(list(items3.keys())[list(items3.values()).index(z)])
#                    items2.pop(list(items2.keys())[list(items2.values()).index(z)])
                if w + min(items2.values()) > limit:
                    w = 0
                    final_list.append(trip)
                #    print('yuhuuuu', final_list)
                    trip = []
                    items3 = items2.copy()
                    
                
                elif z + w <= limit:
                    w += z
                    trip.append((list(items2.keys())[list(items2.values()).index(z)]))
                    items3.pop(list(items3.keys())[list(items3.values()).index(z)])
                    items2.pop(list(items2.keys())[list(items2.values()).index(z)])
                    #items3 = items2.copy()
              #      print('here', trip)
                    

                if len(items3) == 0:
                 #   print('enter here')
                 #   print('items 2', items2)
                    w = 0
                    final_list.append(trip)
                    trip = []
                    items3 = items2.copy()
                    break
        if w == 0:
         #   print('hereoio')
            if len(trip) != 0:
                final_list.append(trip)
          #  print('yoyoyoyo', trip)
            trip = []
    
    print(final_list)
    return final_list
    
greedy_transport({'Rose': 50, 'Abby': 38, 'Patches': 12, 'Willow': 35, 'Coco': 10, 'Betsy': 65, 'Dottie': 85, 'Daisy': 50, 'Lilly': 24, 'Buttercup': 72}, 100)


