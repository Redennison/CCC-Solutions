import sys

def getTime(position):
    secs = 0
    for i in range(0, n):
        distance = abs(p[i] - position) - d[i]
        if distance > 0:
            secs += w[i] * distance
    return secs

p, w, d = [], [], []
n, l, r = int(input()), sys.maxsize, -sys.maxsize - 1

for i in range(0, n):
    values = input().split(" ")
    p.append(int(values[0]))
    w.append(int(values[1]))
    d.append(int(values[2]))

    l = min(l, p[i])
    r = max(r, p[i])

while (l <= r):
    mid = round(l + (r - l) / 2)

    time = getTime(mid) 
    timeplusOne = getTime(mid+1)
    timeMinusOne = getTime(mid-1)

    if (time <= timeplusOne) and (time <= timeMinusOne):
        shortestTime = time 
        break 
    elif time < timeplusOne:
        r = mid - 1
    else: 
        l = mid + 1

print(shortestTime)


