if __name__ == '__main__':
    students = []
    for _ in range(int(input())):
        name = input()
        score = float(input())
        students.append([name, score])

    lowest = min([x[1] for x in students])
    second_lowest = min([x[1] for x in students if x[1] != lowest])
    second_lowest_students = sorted([x[0] for x in students if x[1] == second_lowest])

    for s in second_lowest_students:
        print(s)
