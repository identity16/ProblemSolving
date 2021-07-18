import math

A, B, C = map(int, input().split())

if C - B <= 0:
    print(-1)
else:
    result = math.ceil(A / (C - B))

    if A % (C - B) == 0:
        result += 1

    print(result)
