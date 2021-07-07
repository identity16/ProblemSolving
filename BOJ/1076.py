table = {
    'black': 0,
    'brown': 1,
    'red': 2,
    'orange': 3,
    'yellow': 4,
    'green': 5,
    'blue': 6,
    'violet': 7,
    'grey': 8,
    'white': 9,
}

first = input()
second = input()
third = input()

print((10 * table.get(first) + table.get(second)) * (10 ** table.get(third)))
