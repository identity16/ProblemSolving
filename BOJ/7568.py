# 7568. 덩치

N = int(input())

people = []

for i in range(N):
    x, y = map(int, input().split())
    people.append([x, y, 0])


for i in range(N):
    for j in range(i + 1, N):
        if people[i][0] < people[j][0] and people[i][1] < people[j][1]:
            people[i][2] += 1
        elif people[i][0] > people[j][0] and people[i][1] > people[j][1]:
            people[j][2] += 1

result = map(lambda p:str(p[2] + 1), people)
print(' '.join(result))