x = input("Введите существительное: ")

if x[0].isupper():                           # isupper() Метод возвращает True, если все символы указаны в верхнем регистре, в ином случае False.
    print("Это имя собственное.")            
else:
    print("Это имя нарицательное.")