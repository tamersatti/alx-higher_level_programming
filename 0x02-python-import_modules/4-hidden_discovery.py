#!/usr/bin/python3
if __name__ == "__main__":
    import hidden_4
      # Print sorted names from directories
    for i in sorted(dir(hidden_4)):
        # print only name that donot start with __
        if i[:2] != '__':
            print("{}".format(i))
