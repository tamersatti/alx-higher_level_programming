#!/usr/bin/python3
def remove_char_at(str, m):
    if m < 0:
        return str
    else:
        str = str[0:m] + str[m+1:]
    return str
