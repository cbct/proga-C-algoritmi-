s = ("1, 2, 3, 100")
x = s.split(", ")
y = []

print("Список из целых чисел: ", x)    

for i in x:
    y.append(float(i))
print("Список из нецелочисленных чисел: ", y)