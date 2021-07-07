input_list = input().split()

if input_list[0] == '1' or input_list[0] == '8':
    diff = int(input_list[1]) - int(input_list[0])

    for i in range(2, 8):
        if int(input_list[i]) - int(input_list[i-1]) != diff:
            print('mixed')
            exit()

    if diff > 0:
        print('ascending')
    else:
        print('descending')
else:
    print('mixed')
