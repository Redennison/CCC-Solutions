n = int(input())
lines = []
for i in range(n):
    lines.append(input())

numT, numS = 0, 0
for i in range(n):
    numT += lines[i].count('T')+lines[i].count('t')
    numS += lines[i].count('S')+lines[i].count('s')

if numT > numS:
    print('English')
else:
    print('French')
