# 1436. 영화감독 숌

N = int(input())

num = 665
while N > 0:
    num += 1

    if str(num).find('666') >= 0:
        N -= 1

print(num)
