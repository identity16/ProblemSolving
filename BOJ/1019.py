# 1019. 책 페이지

in_str = input()
L = len(in_str)
N = int(in_str)


def init_from_length(L):
    arr = [int((L - 1) * (10 ** (L - 2))) for _ in range(10)]
    for i in range(L - 1):
        arr[0] -= 10 ** i
    
    return arr

result = init_from_length(L)

for l in range(L-1, -1, -1):
    n = N // (10 ** l)
    N %= 10 ** l

    for i in range(0, n):
        if l == L-1 and i == 0: continue

        result[i] += 10 ** l

    if n > 0:
        for i in range(10):
            if l == L-1:
                result[i] += int(l * (n-1) * 10 ** (l-1))
            else:
                result[i] += int(l * n * 10 ** (l-1))



    result[n] += N + 1

print(" ".join(map(str, result)))