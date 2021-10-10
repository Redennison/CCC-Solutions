def isPrime(num):
    for i in range(2, int(num**0.5)+1):
        if num%i == 0:
            return False 
    return True 

t = int(input())

for i in range(0, t):
    n = int(input())
    for j in range(3, n+1):
        if isPrime(j) and isPrime(n*2-j):
            print(f'{j} {n*2-j}')
            break

