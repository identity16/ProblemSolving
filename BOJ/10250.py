T = int(input())

for i in range(T):
    In = input().split()
    H = int(In[0])
    N = int(In[2])

    print((str(H if N % H == 0 else (N % H)) +
          '%02d') % ((N - 1) // H + 1))
