if __name__ == '__main__':
	N = int(input())
	
	i = 0
	l = []
	while(i < N):
		cmd = input()
		
		if 'insert' in cmd:
			a = cmd.split(' ')
			l.insert(int(a[1]), int(a[2]))
		elif 'print' in cmd:
			print(l)
		elif 'remove' in cmd:
			a = cmd.split(' ')
			l.remove(int(a[1]))
		elif 'append' in cmd:
			a = cmd.split(' ')
			l.append(int(a[1]))
		elif 'sort' in cmd:
			l.sort()
		elif 'pop' in cmd:
			l.pop()
		elif 'reverse' in cmd:
			l.reverse()
		
		i += 1
