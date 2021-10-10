K = int(input())
numbers = [] 

for i in range(0, K):
    numbers.append(int(input()))

i = 0
# Deletes all incorrect nums from list
while (i < len(numbers)):
    if numbers[i] == 0:
        del numbers[i-1:i+1]
        i -= 2
    i += 1

# Prints sum of correct nums
print(sum(numbers))
