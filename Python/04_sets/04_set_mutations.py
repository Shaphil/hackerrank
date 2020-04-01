# Enter your code here. Read input from STDIN. Print output to STDOUT

input()
a = set(map(int, input().split()))

n = int(input())
while n > 0:
    cmd = input().split()[0]
    s = set(map(int, input().split()))
    if cmd == 'intersection_update':
        a.intersection_update(s)
    elif cmd == 'update':
        a.update(s)
    elif cmd == 'symmetric_difference_update':
        a.symmetric_difference_update(s)
    elif cmd == 'difference_update':
        a.difference_update(s)

    n -= 1

print(sum(a))
