import math

l = input('Введите числа через пробел для вычисления логорифм: ')
l2 = l.split()
l3 = []


for j in l2:
    l3.append(float(j))

print(l3)


for i in l3:
    print(math.log(i))