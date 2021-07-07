N = int(input())

cnt = [0 for _ in range(26)]

max = 0
for i in range(N):
    first_idx = ord(input()[0]) - ord('a')
    cnt[first_idx] += 1

    if cnt[first_idx] > max:
        max = cnt[first_idx]

if max < 5:
    print('PREDAJA')
else:
    for i in range(26):
        if cnt[i] >= 5:
            print(chr(i + ord('a')), end='')

    print()
