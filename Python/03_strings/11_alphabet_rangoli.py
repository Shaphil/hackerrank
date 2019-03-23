def print_rangoli(size):
    rows = 2 * size - 1
    cols = 2 * rows - 1
    for i in range(rows):
        for j in range(cols):
            if j == cols // 2:
                print('.', end='')
            else:
                print('-', end='')
        print()


if __name__ == '__main__':
    # n = int(input())
    print_rangoli(5)
