n, maxSpeed = int(input()), -1
attempts = []

for i in range(0, n):
    attempt = [int(x) for x in input().split()]
    attempts.append((attempt[0], attempt[1]))

attempts.sort()

for i in range(1, n):
    distance = abs(attempts[i][1]-attempts[i-1][1])
    time = abs(attempts[i][0]-attempts[i-1][0])
    speed = distance/time
    maxSpeed = max(maxSpeed, speed)

print(maxSpeed)