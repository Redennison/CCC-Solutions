w = int(input())
n = int(input())

weights = []
for i in range(n):
    weights.append(int(input()))

numCars, weight, broken = 0, 0, False
m = min(len(weights), 4)
for i in range(m):
    if weight+weights[i] <= w:
        weight += weights[i]
        numCars += 1
    else:
        broken = True
        break 
if not broken:
    for i in range(4, n):
        newWeight = weight+weights[i]-weights[i-4]
        if newWeight <= w:
            weight = newWeight
            numCars += 1
        else:
            break

print(numCars)

        



