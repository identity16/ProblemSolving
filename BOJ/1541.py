input_str = input()

result = 0
chunk = 0
tmp = 0
op = '+'

for ch in input_str:
    if ch.isnumeric():
        tmp = tmp * 10 + int(ch)
    elif ch == '+':
        chunk += tmp
        tmp = 0
    elif ch == '-':
        chunk += tmp
        if op == '-':
            result -= chunk
        else:
            result += chunk

        op = '-'
        chunk = 0
        tmp = 0


chunk += tmp
if op == '-':
    result -= chunk
else:
    result += chunk


print(result)
