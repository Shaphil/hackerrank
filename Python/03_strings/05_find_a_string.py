def count_substring(string, sub_string):
    cnt = 0
    sub_len = len(sub_string)
    str_len = len(string)
    it = str_len - sub_len + 1
    for i in range(it):
        if string[i: i + sub_len] == sub_string:
            cnt += 1

    return cnt


if __name__ == '__main__':
    string = input().strip()
    sub_string = input().strip()

    count = count_substring(string, sub_string)
    print(count)
