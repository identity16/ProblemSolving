T = int(input())

for i in range(T):
    k = int(input())
    n = int(input())

    l = [j for j in range(1, n + 1)]

    for j in range(k):
        tmp = 0

        for m in range(n):
            tmp += l[m]
            l[m] = tmp

    print(l[n-1])
