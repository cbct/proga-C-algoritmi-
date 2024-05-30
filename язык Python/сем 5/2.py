x = int(input("Введите целове число: "))
v = []

def nums(x):
    y = x - 1
    z = x + 1
    v.extend([y, z])     # методом extand добавляем в список 2 значения
    return v             # метод extand тоже самое что и append но занимает одну строчку

print(nums(x))




































