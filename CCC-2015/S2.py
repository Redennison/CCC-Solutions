'''
Points:
- If don't have size, take closest size larger than requested (leaves larger sizes for larger requests)
- Each player must have different number (even if different size jerseys)

Solution:
- Loop through each requested size/number
    - If requested number in numbersTaken, jersey not available
    - If size exists, jersey available
    - Increment size to see if above sizes are available (if so, jersey available)
'''


from collections import Counter

# GLOBAL VARIABLES
numJerseys = int(input())
numAthletes = int(input())

sizes = ('S','M','L')
availableJerseySizes = Counter()
requestedJerseys = list()
numbersTaken = set()

maxRequestsSatisfied = 0

# FUNCTIONS
def getSizeAvailable(requestedSize):
    sizeNumber = sizes.index(requestedSize)
    for i in range(sizeNumber, 3):
        # Jersey available if size in sizes
        if availableJerseySizes[sizes[i]] > 0:
            return (True, sizes[i])
    return (False)


# Gets jerseys available as input
for i in range(0, numJerseys):
    size = input()
    availableJerseySizes[size] += 1
    print(i)
print('hello')
# Saves each players requested size + number as a tuple
for i in range(0, numAthletes):
    requests = input().split(" ")
    requestedSize = requests[0]
    requestedNumber = int(requests[1])
    requestedJerseys[i] = (requestedSize, requestedNumber)

for i in range(0, len(requestedJerseys)):
    # Get requested size/number from index
    requestedSize = requestedJerseys[i][0]
    requestedNumber = requestedJerseys[i][1]

    # Check if number isn't taken
    if requestedNumber not in numbersTaken:

        sizeAvailable = getSizeAvailable(requestedSize)
        if sizeAvailable[0]:
            maxRequestsSatisfied += 1
            # Sizes available is 1 less since 1 is now taken
            availableJerseySizes[sizeAvailable[1]] -= 1

print(maxRequestsSatisfied)


        




    





