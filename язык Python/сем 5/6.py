def binom_prob(p, n, k):

    def factorial(num):
        fact = 1
        for i in range(1, num+1):
            fact *= i
        return fact


    def binomial_coefficient(n, k):
        return factorial(n) / (factorial(k) * factorial(n-k))

 
    probability = binomial_coefficient(n, k) * (p**k) * ((1-p)**(n-k))
    return probability




print("n - количество испытаний")
print("р - вероятность успеха")    
print("k - получим количество успехов")
print("--------------------------------------------------------")
print("3 числа p n k:")
p = float(input("p = "))
n = int(input("n = "))
k = int(input("k = "))



probability = binom_prob(p, n, k)
print("Ответ: ", probability)










    






















































