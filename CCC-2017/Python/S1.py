n, swiftRuns, semaphoreRuns, k = int(input()), 0, 0, 0
swifts = [int(x) for x in input().split()]
semaphores = [int(x) for x in input().split()]

for i in range(0, n):
    swiftRuns += swifts[i]
    semaphoreRuns += semaphores[i]
    if swiftRuns == semaphoreRuns:
        k = i+1 

print(k)

