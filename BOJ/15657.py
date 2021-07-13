In = input().split()
N, M = map(int, In)
numbers = list(map(int, input().split()))
numbers.sort()


def print_series(prev_list, start, end, length):
    if length == 1:
        for i in range(start, end):
            prefix = ' '.join([str(numbers[j]) for j in prev_list])

            if len(prev_list) > 0:
                prefix += ' '

            print(prefix + str(numbers[i]))
    else:
        for i in range(start, end):
            tmp = prev_list.copy()
            tmp.append(i)

            print_series(tmp, i, end, length - 1)


print_series([], 0, N, M)
