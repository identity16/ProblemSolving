def hash(str):
    r = 31
    M = 1234567891
    result = 0
    for i in range(len(str)):
        result += ((ord(str[i]) - ord('a') + 1) * (r ** i))
        result %= M

    return result


L = int(input())
str = input()
print(hash(str))
