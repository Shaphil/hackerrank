if __name__ == '__main__':
    n = int(input())
    students = [[input(), float(input())] for _ in range(n)]

    second_lowest = sorted(set([marks for name, marks in students]))[1]
    print('\n'.join([name for name, marks in sorted(students) if marks == second_lowest]))


# Explanation
# Let's break the code into pieces
# Let's start with this one first:
# second_lowest = sorted(set([marks for name, marks in students]))[1]

# return a list of the marks
# mks = [marks for name, marks in students]

# remove duplicate marks
# unique_mks = set(mks)

# sort the unique list and return the second element
# since the first element is the lowest but we want second lowest
# second_lowest = sorted(unique_mks)[1]
