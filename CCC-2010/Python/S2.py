k = int(input())
charValues = []
charValue = ''

for i in range(k):
    charValues.append(input().split())
seq = input()

while (len(seq) > 0):
    for value in charValues:
        letter = value[0]
        binary = value[1]

        if seq[:len(binary)] == binary:
            charValue += letter 
            seq = seq[len(binary):]

print(charValue)