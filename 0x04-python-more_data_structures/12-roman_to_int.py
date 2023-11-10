#!/usr/bin/python3
def roman_to_int(roman_string):
    if not isinstance(roman_string, str):
        return 0
    to = 0
    n = 0
    dig = {'I': 1, 'V': 5, 'X': 10, 'L': 50, 'C': 100, 'D': 500, 'M': 1000}
    for m in reversed(roman_string):
        n = dig[m]
        to += n if to < n * 5 else -n
    return to
