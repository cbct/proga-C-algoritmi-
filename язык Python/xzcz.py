pairs = [(2, 4), (4, 6), (0, 1), (5, 2), (9, 1), (3, 8)]
calc = {}
for i in pairs:
    calc[i] = list(i)[0] * list(i)[1]

print(calc)