from collections import Counter 
string, anagram = input(), input()

# Count amount of each letter in string
numLetters = Counter()
for char in string:
    numLetters[char] += 1

letterSet = set(string)
numAsterisks = 0
# Decremement amount of letter if in anagram
for char in anagram:
    if char == '*':
        numAsterisks += 1
    else:
        numLetters[char] -= 1

# Checks if number of asterisks satisfies amount of letters off
for char in letterSet:
    if numLetters[char] > 0:
        numAsterisks -= numLetters[char]
    if numAsterisks < 0:
        print('N')
        break

if numAsterisks >= 0:
    print('A')