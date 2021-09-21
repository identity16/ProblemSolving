# 1874. 스택 수열

N = int(input())

stack = []
pushed_max = 0
result = []
is_failed = False

for i in range(N):
    num = int(input())

    if pushed_max < num:
        for j in range(pushed_max + 1, num + 1):
            pushed_max += 1
            result.append('+')
            stack.append(j)
        
        stack.pop()
        result.append('-')
    else:
        if stack[-1] != num:
            is_failed = True
            break
        else:
            stack.pop()
            result.append('-')


if is_failed:
    print('NO')
else:
    for r in result:
        print(r)
    