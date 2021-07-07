while True:
    word = input()
    if word == '0':
        break

    is_palindrome = True
    for i in range(len(word) // 2):
        if word[i] != word[-(i + 1)]:
            is_palindrome = False
            break

    if is_palindrome:
        print('yes')
    else:
        print('no')
