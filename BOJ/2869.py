A, B, V = map(int, input().split())

d = (V - A) // (A - B)
r = (V - A) % (A - B)

if r == 0:
    print(d + 1)
else:
    print(d + 2)
