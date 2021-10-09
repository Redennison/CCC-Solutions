n = int(input())
computers = {}
topValues = [-1, -1]

for i in range(n):
    computer = input().split()
    value = 2*int(computer[1])+3*int(computer[2])+int(computer[3])
    computers[computer[0]] = value

topValues = list(computers.values())
topValues.sort()
topValues.reverse()

if len(computers) == 1:
    print(list(computers.keys())[0])
else: 
    topKeys = [None]*2
    for key in computers.keys():
        if computers[key] == topValues[0]:
            topKeys[0] = key 
        elif computers[key] == topValues[1]:
            topKeys[1] = key 

    if computers[topKeys[0]] == computers[topKeys[1]]:
        if topKeys[1][0] < topKeys[0][0]:
            temp = topKeys[1]
            topKeys[1] = topKeys[0]
            topKeys[0] = temp

print(topKeys[0])
print(topKeys[1])
