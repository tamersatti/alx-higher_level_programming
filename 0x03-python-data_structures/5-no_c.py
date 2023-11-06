#!/usr/bin/python3
def no_c(my_string):
    new_str = ""
    for element in my_string:
        if element != "c" and element != "C":
            new_str += element
    return new_str
