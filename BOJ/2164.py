N = int(input())

numbers = [i for i in range(1, N+1)]

numLen = len(numbers)

while numLen > 2:
    numbers = numbers[1::2]
    if numLen % 2 == 1:
        numbers.append(numbers[0])
        numbers.pop(0)

    numLen = len(numbers)

print(numbers[-1])
