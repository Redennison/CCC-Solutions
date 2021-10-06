'''
Points:
- If don't have size, take closest size larger than requested (leaves larger sizes for larger requests)
- Each player must have different number (even if different size jerseys)

Solution:
- Loop through each requested size/number
    - If requested number in numbersTaken, jersey not available
        - If size exists, jersey available
        - If size doesn't exist, check the closest larger size available
        - If exact or larger size available jersey available
            - # can no longer be taken
            - 1 less size of the jersey size taken
            - Another athlete gets jersey they wanted
'''

# GLOBAL VARIABLES
numJerseys = int(input())
numAthletes = int(input())
availableJerseySizes = {'S': 0, 'M': 0, 'L': 0}
numbersTaken = set()
maxRequestsSatisfied = 0

# Gets jerseys available as input
for i in range(0, numJerseys):
    availableJerseySizes[input()] += 1

for i in range(0, numAthletes):
    requests = input().split(" ") 
    requestedSize = requests[0] 
    requestedNumber = int(requests[1]) 

    # Check if number isn't taken
    if requestedNumber not in numbersTaken:

        sizeIndex = list(availableJerseySizes.keys()).index(requestedSize)
        for i in range(sizeIndex, 3):
            size = list(availableJerseySizes.keys())[i]
            # Jersey available if there is a jersey in that size
            if availableJerseySizes[size] > 0:
                maxRequestsSatisfied += 1
                # 1 less available jersey in chosen size
                availableJerseySizes[size] -= 1
                # Number can no longer be taken
                numbersTaken.add(requestedNumber)
                break

print(maxRequestsSatisfied)


        




    





