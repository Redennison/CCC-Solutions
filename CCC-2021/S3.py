import sys

def getTime(position):
    secs = 0
    for i in range(0, N):
        distance = abs(P[i] - position) - D[i]
        if distance > 0:
            secs += W[i] * distance
    return secs

P, W, D = [], [], []
N, l, r = int(input()), sys.maxsize, -sys.maxsize - 1

for i in range(0, N):
    values = input().split(" ")
    P.append(int(values[0]))
    W.append(int(values[1]))
    D.append(int(values[2]))

    if P[i] < l:
        l = P[i]
    if P[i] > r:
        r = P[i]

while (l <= r):
    mid = round(l + (r - l) / 2)

    time = getTime(mid) 
    timePlusOne = getTime(mid+1)
    timeMinusOne = getTime(mid-1)

    if (time <= timePlusOne) and (time <= timeMinusOne):
        shortestTime = time 
        break 
    elif time < timePlusOne:
        r = mid - 1
    else: 
        l = mid + 1

print(round(shortestTime))


