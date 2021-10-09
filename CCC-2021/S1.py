n, area = int(input()), 0
heights = [int(x) for x in input().split()]
widths = [int(x) for x in input().split()]

for i in range(n):
    area += widths[i]*(heights[i]+heights[i+1])/2

print(area)