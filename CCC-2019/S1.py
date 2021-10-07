grid = [1,2,3,4]

def vertical():
    numHolderOne = grid[0]
    numHolderTwo = grid[2]
    grid[0] = grid[1]
    grid[2] = grid[3]
    grid[1] = numHolderOne
    grid[3] = numHolderTwo

def horizontal():
    numHolderOne = grid[2]
    numHolderTwo = grid[3]
    grid[2] = grid[0]
    grid[3] = grid[1]
    grid[0] = numHolderOne
    grid[1] = numHolderTwo

sequence = input()
for i in range(0, len(sequence)):
    if sequence[i] == 'H':
        horizontal()
    else:
        vertical()

print(f'{grid[0]} {grid[1]}')
print(f'{grid[2]} {grid[3]}')
