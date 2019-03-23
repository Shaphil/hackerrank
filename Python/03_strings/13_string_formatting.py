def print_formatted(number):
    _len = len('{0:b}'.format(n))
    for i in range(1, n + 1):
        _decimal = '{0:d}'.format(i).rjust(_len)
        _octal = '{0:o}'.format(i).rjust(_len)
        _hexadecimal = '{0:X}'.format(i).rjust(_len)
        _binary = '{0:b}'.format(i).rjust(_len)
        print(_decimal, _octal, _hexadecimal, _binary)


if __name__ == '__main__':
    n = int(input())
    print_formatted(n)
