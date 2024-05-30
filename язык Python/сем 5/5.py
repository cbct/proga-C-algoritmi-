
def x():

    n = input("Введите имена: ")
    age = input("Введите их возраст: ")

    n = n.split()               
    age = age.split()            # split создает список из значений в переменной age и n

    # print(n)
    # print(age)

    k = {}                       # k созданный список ключей
    if len(n) == len(age):       # проверяет количество элементов в переменных
        for i in range(len(n)):     
            k[n[i]] = age[i]     # добавляем ключи
        print(k)
    else:
        print("Списки имеют разную длину")


x()


















































