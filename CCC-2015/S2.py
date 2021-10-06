numJerseys = int(input())
numAthletes = int(input())
jerseys = {}
players = []
sizes = ('S','M','L')
numbersTaken = set()
maxRequestsSatisfied = 0

# Gets jerseys 
for i in range(1, numJerseys+1):
    jerseys[i] = input()

# Get player requests
for i in range(0, numAthletes):
    request = input().split(" ")
    size = request[0]
    number = int(request[1])
    players.append((size, number))

# Loops through players to determine if jersey available
for player in players:
    playersSize = player[0]
    playersNumber = player[1]
    # Ensure number hasn't been taken
    if playersNumber not in numbersTaken:
        sizeIndex = sizes.index(playersSize)
        for i in range(sizeIndex, 3):
            if jerseys[playersNumber] == sizes[i]:
                maxRequestsSatisfied += 1
                del jerseys[playersNumber]
                numbersTaken.add(playersNumber)
                break

print(maxRequestsSatisfied)


        




    





