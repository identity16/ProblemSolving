# 2805. 나무 자르기
N, M = map(int, input().split())
tree = list(map(int, input().split()))

tree.sort(reverse=True)

remain = M
w = 0 # weight
h = tree[0]
for i in range(N-1):
    w += 1
    h_range = tree[i] - tree[i + 1]

    if w * h_range < remain:
        remain -= w * h_range
        h -= h_range
    elif w * h_range == remain:
        remain = 0
        h -= h_range
        break
    else:
        h -= remain // w
        if remain % w > 0:
            h -= 1
        remain = 0
        break

w += 1

if remain > 0:
    h -= remain // w
    if remain % w > 0:
        h -= 1


print(h)