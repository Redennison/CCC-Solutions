n, numCorrect = int(input()), 0
responses, answers = [], []

for i in range(n):
    responses.append(input())
for i in range(n):
    answers.append(input())

for i in range(n):
    if responses[i] == answers[i]:
        numCorrect += 1

print(numCorrect)
