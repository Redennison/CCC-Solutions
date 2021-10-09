year = int(input())

distinct = True
while distinct:
    year += 1
    nums = set()
    strYear = str(year)
    for num in strYear:
        if num in nums:
            distinct = False
            break
        else:
            nums.add(num)
    if distinct:
        break
    else:
        distinct = True

print(year)
    
