print("╔══════════════╗")
print("║░░░░▄▄▄▄▄▄░░░░║")
print("║░░▄▀░░░░░░▀▄░░║")
print("║░▐░░░▐░░▐░░░▌░║")
print("║░▐░░░░░░░░░░▌░║")
print("║░▐░░▀▄▄▄▄▄▀░▌░║")
print("║░░▀▄░░░░░░▄▀░░║")
print("║░░░░▀▀▀▀▀▀░░░░║")
print("╚══════════════╝")
print("-----------------------------------------------------")

grades = {'Anna': 4, 'Bob': 3, 
        'Claire': 5, 'Dick': 2, 
        'Elena': 5, 'Fred': 5, 
        'George': 4, 'Kristina': 3, 
        'Nick': 2, 'Ursula': 4, 
        'Viktor': 5}

excel = []
good = []
satisf = []
bad = []

for key, value in grades.items():                       # grades.items() - это метод, который использован для получения ключей/значаний из словаря grades.
    print(f"{key}: {value}")                            # f"{student}: {grade}" метод форматирования
                                                        
    if value == 5:
        excel.append(key)
    elif value == 4:
        good.append(key)
    elif value == 3:
        satisf.append(key)
    elif value == 2:
        bad.append(key)

print("-----------------------------------------------------")      
print("Отличники: ", excel[0],",", excel[1],",", excel[2],",", excel[3])
print("Хорошисты: ", good[0],",", good[1],",", good[2])
print("Трешники: ", satisf[0],",", satisf[1])
print("Двоешники: ", bad[0],",", bad[1])












































