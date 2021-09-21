# 4949. 균형잡힌 세상

while True:
    stack = []
    str = input()
    if str == '.': break

    say_no = False
    for ch in str:
        if ch == '(' or ch == '[': # Open
            stack.append(ch)
        elif ch == ')' or ch == ']': # Close
            if len(stack) == 0:
                say_no = True
                break

            top = stack[-1]

            if (ch == ')' and top == '(') or (ch == ']' and top == '['):
                stack.pop()
            else:
                say_no = True
                break
    
    if len(stack) > 0:
        say_no = True

    if say_no:
        print('no')
    else:
        print('yes')

