# 1016. 제곱 ㄴㄴ 수
def solution(p_min, p_max):
    A, p = [0 for _ in range(p_max - p_min + 1)], 0

    for i in range(2, int(p_max ** 0.5) + 1):
        if int(i ** 0.5) ** 2 == i:
            continue

        end = p_max - p_min
        start = end + 1

        if i ** 2 <= p_max:
            if i ** 2 >= p_min:
                start = i ** 2 - p_min
            else:
                start = ((i ** 2) - p_min % (i ** 2)) % (i ** 2)
        
        for j in range(start, end + 1, i**2):
            A[j] = 1


    for  i in range(p_min, p_max + 1):
        if A[i - p_min] == 0:
            p += 1

    return p

i_min, i_max = map(int, input().split())

print(solution(i_min, i_max))