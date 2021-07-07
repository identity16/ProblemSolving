cnt = 0
for i in range(8):
    row = input()
    for j in range(8):
        cell = row[j]

        if (cell == 'F') and (i % 2 == j % 2):
            cnt += 1

print(cnt)
