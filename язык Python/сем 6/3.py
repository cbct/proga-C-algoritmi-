l = [8, 9, 0, 2, 5, 0, 5, 7, 5, 8, 8]
l2 = [8, 9, 0, 2, 3, 1, 0, 9, 8, 7, 5]

z = list(map(lambda x, y: x * y, l, l2))
print("Умножение: ", z)

ne_chet = list(filter(lambda x: x % 2 != 0, z))
print("Не четные числа: ", ne_chet)

chet = ne_chet = list(filter(lambda x: x % 2 == 0, z))
print("Четные числа: ", chet)
























































































