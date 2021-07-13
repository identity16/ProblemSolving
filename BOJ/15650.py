In = input().split()
N, M = map(int, In)


def print_series(prefix, start, end, length):
    if length == 1:
        for i in range(start, end):
            if len(prefix) == 0:
                print(i)
            else:
                print(prefix + ' ' + str(i))
    else:
        for i in range(start, end):
            if len(prefix) == 0:
                print_series(str(i), i + 1, end, length - 1)
            else:
                print_series(prefix + ' ' + str(i), i + 1, end, length - 1)


print_series('', 1, N + 1, M)
