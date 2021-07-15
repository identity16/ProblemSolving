In = input().split()
N, K = map(int, In)

l = [i for i in range(1, N + 1)]

prev = -1
print("<", end="")
for i in range(N-1):
    cur = (prev + K) % len(l)
    print(l.pop(cur), end=", ")
    prev = cur - 1

print(str(l[0]) + ">")
