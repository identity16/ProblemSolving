In = input().split()
N = int(In[0])
M = int(In[1])

cnt = [[0 for _ in range(M - 7)] for _ in range(N - 7)]

for i in range(N):
    row = input()

    for j in range(M):
        if (i % 2 == j % 2 and row[j] == 'B') or (i % 2 != j % 2 and row[j] == 'W'):
            for k in range(i, i - 8, -1):
                if k < 0:
                    break
                if k >= N - 7:
                    continue

                for l in range(j, j - 8, -1):
                    if l < 0:
                        break
                    if l >= M - 7:
                        continue
                    cnt[k][l] += 1

min = 32

for row in cnt:
    for c in row:
        v = c
        if c > 32:
            v = 64 - c

        if min > v:
            min = v

print(min)
