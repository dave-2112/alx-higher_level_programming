#!/usr/bin/python3
def safe_print_list(my_list=[1, 2, 3, 4, 5], x=10):
    r_num = 0
    for i in range(x):
        try:
            print(my_list[i], end="")
            r_num += 1
        except IndexError:
            break
    print()
    return r_num
