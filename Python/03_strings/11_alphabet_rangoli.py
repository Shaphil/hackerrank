def print_rangoli(size):
    vertical = 2 * size - 1
    horizontal = 4 * size - 3
    for i in range(vertical):
        for j in range(horizontal):
            if j == horizontal // 2:
                print('.', end='')
            else:
                print('-', end='')
        print()


if __name__ == '__main__':
    # n = int(input())
    print_rangoli(5)
