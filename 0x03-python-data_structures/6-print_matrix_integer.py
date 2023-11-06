#!/usr/bin/python3
def print_matrix_integer(matrix=[[]]):
    if not matrix:
        print(None)
    else:
        for lis in range(len(matrix)):
            for items in range(len(matrix[lis])):
                if items != len(matrix[lis]) - 1:
                    endspace = ' '
                else:
                    endspace = ''
                print("{:d}".format(matrix[lis][items]), end=endspace)
            print()
