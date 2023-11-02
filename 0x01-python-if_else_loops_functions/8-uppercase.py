#!/usr/bin/python3
def uppercase(str):
    for m in str:
        if ord("a") <= ord(m) <= ord("z"):
            m = chr(ord(m) - 32)
        print("{:s}".format(m), end="")
    print()
