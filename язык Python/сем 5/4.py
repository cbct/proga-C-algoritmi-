import math

x = input("Список чисел через пробел: ")
x = x.split()
print("----------------------------------------------------------")

def my_log(x):
    for i in x:
        if float(i) <= 0:
            print("None")
        else:
            y = math.log(float(i))
            print(y)

my_log(x)



# 465 2.5 -5 23.2 0 978




































