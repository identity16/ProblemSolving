from functools import cmp_to_key


def comp(a, b):
    if(len(a) > len(b)):
        return 1
    elif(len(a) == len(b)):
        if a > b:
            return 1
        else:
            return -1
    else:
        return -1


N = int(input())

comp_list = []
for i in range(N):
    word = input()
    comp_list.append(word)

comp_list.sort(key=cmp_to_key(comp))

prev = ''
for word in comp_list:
    if prev == word:
        continue
    print(word)
    prev = word
