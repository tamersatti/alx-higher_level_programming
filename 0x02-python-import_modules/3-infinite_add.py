#!/usr/bin/python3
def add_arg(argv):
    m = len(argv) - 1
    if m == 0:
        print("{:d}".format(m))
        return
    else:
        i = 1
        add = 0
        while i <= m:
            add += int(argv[i])
            i += 1
        print("{:d}".format(add))


if __name__ == "__main__":
    import sys
    add_arg(sys.argv)
