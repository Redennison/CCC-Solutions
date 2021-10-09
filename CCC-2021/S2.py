m = int(input())
n = int(input())
k = int(input())
rows = set()
cols = set()

for i in range(k):
    brush = input().split()
    char = brush[0]
    num = brush[1]

    if char == 'R':
        if num not in rows:
            rows.add(num)
        else:
            rows.remove(num)
    else:
        if num not in cols:
            cols.add(num)
        else:
            cols.remove(num)

rowsSize = len(rows)
colsSize = len(cols)

numGold = (rowsSize * n + colsSize * m) - rowsSize * colsSize * 2
print(numGold)