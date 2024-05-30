from timeit import timeit
import numpy as np

grades = np.array([0.3, 0.3, 0.4])
weights = np.array([7, 9, 8])

def weighted_sum(weights, grades, normalize = False):
    sum_weights = np.sum(weights)
    if (normalize and sum_weights != 1):
        weights = weights * (1 / sum_weights)
        
    return np.sum(np.dot(weights, grades))
    
#----------------------------------------------------------------------------------------------

def test(w, g, out, normalize = False):
    q = weighted_sum(np.array(w), np.array(g), normalize)
    assert np.isclose(q, out)

test([0.3, 0.3, 0.4], [7, 9, 8], 8)
test([0.1, 0.2, 0.3, 0.4], [1, 5, 3, 2], 2.8)
test([1, 2, 3, 4], [1, 5, 3, 2], 28)
test([1, 2, 3, 4], [1, 5, 3, 2], 2.8, normalize=True)

N = 1000000

test([1, 2, 3, 4], [1, 5, 3, 2], 28)

benchmark = timeit("sum([x/x for x in np.array([1]*N)])", "from __main__ import N, np", number=1)
otherbenchmark = timeit("weighted_sum(np.array([1.1]*N), np.array([1]*N), True)", 
                        "from __main__ import N, weighted_sum, np", number=1)

print(benchmark/otherbenchmark)
assert benchmark > otherbenchmark*1.7, "Код работает слишком медленно — вы точно использовали методы numpy?"














































































