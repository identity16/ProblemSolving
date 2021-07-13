In = input().split()
N = int(In[0])
M = int(In[1])

cards = input().split()

closest = 0
for i in range(N):
    card_set = [None, None, None]
    card_set[0] = int(cards[i])
    for j in range(i + 1, N):
        card_set[1] = int(cards[j])
        for k in range(j + 1, N):
            card_set[2] = int(cards[k])

            result = sum(card_set)
            if result <= M and result > closest:
                closest = result

print(closest)
