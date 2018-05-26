if __name__ == '__main__':
    s = input()
    
    has_alpha_num = has_alpha = has_digits = has_lower = has_upper = False
    for c in s:
        has_alpha_num = has_alpha_num or c.isalnum()
        has_alpha = has_alpha or c.isalpha()
        has_digits = has_digits or c.isdigit()
        has_lower = has_lower or c.islower()
        has_upper = has_upper or c.isupper()
    
    print(has_alpha_num)
    print(has_alpha)
    print(has_digits)
    print(has_lower)
    print(has_upper)
