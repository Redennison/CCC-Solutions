numGates = int(input())
numPlanes = int(input())
takenGates = [False] * 10**5
numLandings = 0
docks = []

for i in range(numPlanes):
    docks.append(int(input()))

for dock in docks:
    docked = False
    for i in range(dock, 0, -1):
        if takenGates[i] == False:
            numLandings += 1
            takenGates[i] = True 
            docked = True 
            break 
    if not docked:
        break

print(numLandings)
