n = int(input())
data = [int(x) for x in input().split()]
data.sort()

if n%2 == 0:
    high = int(n/2)
    low = int(n/2)-1
else:
    high = int(n/2)+1
    low = int(n/2)

while (high<n):
    print(f'{data[low]} ', end='')
    print(f'{data[high]} ', end='')
    high += 1
    low -= 1

if low == 0:
    print(f'{data[low]} ', end='')



