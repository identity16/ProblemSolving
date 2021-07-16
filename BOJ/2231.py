N = int(input())

result = 0

tmp = N - 1

while tmp > 0:
    sTmp = map(int, str(tmp))

    if tmp + sum(sTmp) == N:
        result = tmp

    tmp -= 1

print(result)
