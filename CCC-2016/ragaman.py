chars = set()

asterisks = 0
missing = 0

string = input()
anagram = input() 

for i in range(0, len(string)):
    chars.add(string[i])

for i in range(0, len(anagram)):
    if anagram[i] == "*":
        asterisks += 1
    elif anagram[i] not in chars:
        missing += 1
    else:
        chars.remove(anagram[i])

if missing > asterisks:
    print('N')
else:
    print('A')

