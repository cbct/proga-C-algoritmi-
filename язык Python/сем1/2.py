# Задача 2 (поэлементная)
import math

L = [12, 3, 8, 125, 10, 98, 54, 199]
L[4] = 0

print("Все элементы L: ")
for i in L:
    print(i)

print("----------------------------------------------------")

for i in L:
    if i <= 0:
        print("Логарифма от нуля нельзя брать!")
    else:
        print(math.log(i))