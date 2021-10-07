import sys

n, small = int(input()), sys.maxsize
data = []

for i in range(0, n):
    subData = [int(x) for x in input().split()]
    for i in range(0, n):
        small = min(small, subData[i])
    data.append(subData)

if data[0][0] == small:
    for i in range(0, n):
        for j in range(0, n):
            print(f'{data[i][j]} ', end='')
        print('')
elif data[0][n-1] == small:
    for i in range(n-1, -1, -1):
        for j in range(0, n):
            print(f'{data[j][i]} ', end='')
        print('')
elif data[n-1][0] == small:
    for i in range(0, n):
        for j in range(n-1, -1, -1):
            print(f'{data[j][i]} ', end='')
        print('')
else: 
    for i in range(n-1, -1, -1):
        for j in range(n-1, -1, -1):
            print(f'{data[i][j]} ', end='')
        print('')