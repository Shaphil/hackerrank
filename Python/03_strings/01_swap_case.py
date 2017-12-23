def swap_case(s):
    swapped = ''
    for c in s:
        if c >= 'a' and c <= 'z':
            swapped += c.upper()
        elif c >= 'A' and c <= 'Z':
            swapped += c.lower()
        else:
            swapped += c
    return swapped


if __name__ == '__main__':
    s = input()
    result = swap_case(s)
    print(result)
