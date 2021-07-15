x, y, w, h = map(int, input().split())

result = 0

if x > w // 2:
    result = w - x
else:
    result = x


if y > h // 2:
    if (h - y) < result:
        result = h - y
else:
    if y < result:
        result = y

print(result)
