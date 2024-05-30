cnt = ["Andorra", "Belarus", "Denmark", 
        "Kenya", "Jamaica", "Romania"]

fh = [1.0, 6.0, 1.0, 4.0, 2.5, 2.0]

                                                # dict создает словарь из списков внутри списка
                                                # list создает списки с помощью zip
x = dict(list(zip(cnt, fh)))                    # zip соединяет 2 списка в 1


print(x)































