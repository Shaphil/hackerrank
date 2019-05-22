n = int(input())
s = set(map(int, input().split()))
t = int(input())

while t > 0:
    cmd = input().split()
    if cmd[0] == 'pop':
        s.pop()
    elif cmd[0] == 'discard':
        s.discard(int(cmd[1]))
    elif cmd[0] == 'remove':
        s.remove(int(cmd[1]))
    
    t -= 1

print(sum(s))
