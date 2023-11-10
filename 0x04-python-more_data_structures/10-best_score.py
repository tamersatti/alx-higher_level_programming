#!/usr/bin/python3
def best_score(a_dictionary):
    if a_dictionary is None:
        return None
    maxv = 0
    maxk = None
    for m, x in a_dictionary.items():
        if x > maxv:
            maxv = x
            maxk = m
    return maxk
