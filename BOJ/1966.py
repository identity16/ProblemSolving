# 1966. 프린터 큐
import heapq

T = int(input())

for i in range(T):
    N, M = map(int, input().split())
    idx_arr = [[] for _ in range(10)]
    input_arr = list(map(int, input().split()))

    for j in range(N):
        priority = input_arr[j]
        idx_arr[priority].append(j)


    count = 0
    last_idx = -1

    for priority in range(9, input_arr[M], -1):
        if len(idx_arr[priority]) == 0: continue

        maximum = -1
        max_idx = -1
        for idx in idx_arr[priority]:
            diff = idx - (last_idx + 1)
            if diff < 0: diff += N
            
            if diff > maximum:
                maximum = diff
                max_idx = idx
        
        last_idx = max_idx
        
        count += len(idx_arr[priority])
    
    for j in range(N):
        cur_idx = (last_idx + 1 + j) % N
        if cur_idx == M:
            count += 1
            break
        elif input_arr[cur_idx] == input_arr[M]:
            count += 1

        
    print(count)
