q, n, total = int(input()), int(input()), 0
dmoj = [int(x) for x in input().split()]
pegland = [int(x) for x in input().split()]

dmoj.sort()
pegland.sort()

if q == 2:
    dmoj.reverse()

for i in range(0, n):
    total += max(dmoj[i], pegland[i])

print(total)