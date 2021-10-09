n = int(input())
first = input().split()
second = input().split()
partners = {}

good = True
for i in range(n):
    if first[i] in partners:
        if partners[first[i]] != second[i]:
            good = False
            break
    elif second[i] in partners:
        if partners[second[i]] != first[i]:
            good = False
            break 
    elif first[i] == second[i]:
        good = False 
        break
    else:
        partners[first[i]] = second[i]

if good:
    print('good')
else:
    print('bad')