cityDiffs = [int(x) for x in input().split()]

for i in range(5):
    for j in range(5):
        if j == i:
            print('0 ', end='')
            continue 
        elif j < i:
            print(f'{sum(cityDiffs[j:i])} ', end='')
        else:
            print(f'{sum(cityDiffs[i:j])} ', end='')
    print('')

