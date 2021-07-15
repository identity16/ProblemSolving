N = int(input())
sangeun = map(int, input().split())

M = int(input())
inputs = map(int, input().split())

dictionary = dict()
for num in sangeun:
    if dictionary.get(num) is None:
        dictionary[num] = 1
    else:
        dictionary[num] += 1


for num in inputs:
    if dictionary.get(num) is None:
        print(0, end=" ")
    else:
        print(dictionary[num], end=" ")
