import os


def solve(s):
    words = s.split(' ')
    caps = [word.capitalize() for word in words]
    return ' '.join(caps)


if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')
    s = input()
    result = solve(s)
    fptr.write(result + '\n')
    fptr.close()
