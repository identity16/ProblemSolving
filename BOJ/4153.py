while True:
    input_str = input().split()

    if input_str[0] == '0' and input_str[1] == '0' and input_str[2] == '0':
        break

    [A, B, C] = sorted(input_str, key=lambda x: int(x))

    if int(A) ** 2 + int(B) ** 2 == int(C) ** 2:
        print("right")
    else:
        print("wrong")
