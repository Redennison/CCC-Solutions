import sys

villages = []
n = int(input())

for i in range(0, n):
    villages.append(int(input()))
villages.sort()
smallestSize = sys.maxsize
for i in range(1, n-1):
    left = villages[i]-villages[i-1]
    right = villages[i+1]-villages[i]
    neighborhood = left/2+right/2
    smallestSize = min(smallestSize, neighborhood)

print(round(smallestSize, 1))