N = int(input())
M = N // 10 + N % 10
i = 1

while M == N:
    M = M // 10 + M % 10
    i = i + 1

print(i)