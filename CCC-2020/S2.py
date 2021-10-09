vis = [[False] * 1005] * 1005
possible = False
m = int(input())
n = int(input())
room, mults, pointQueue = [], [[]] * 1000000, []
for i in range(m):
    room.append([int(x) for x in input().split()])
    for j in range(n):
        mults[room[i][j]].append((i+1, j+1))

pointQueue.append((n, m))
vis[n][m] = True 
while len(pointQueue) > 0:
    point = pointQueue.pop(0)
    r, c = point[0], point[1]
    for coord in mults[r*c]:
        if (coord[0] == 1) and (coord[1] == 1):
            possible = True 
            break 
        elif not vis[coord[0]][coord[1]]:
            vis[coord[0]][coord[1]] = True 
            pointQueue.append(coord)
            
if possible:
    print('yes')
else:
    print('no')