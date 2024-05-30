from timeit import timeit
import numpy as np

def calculate_tax(income):
    sums = np.cumsum(income)
    less_one_hundred = income[sums <= 1000]
    more_one_hundred = income[sums > 1000]
    result = np.sum(less_one_hundred * 0.13)

    size_more_one_hundred = more_one_hundred.size
    if size_more_one_hundred > 0:
        result += more_one_hundred[0] * 0.13

    if size_more_one_hundred > 1:
        result += np.sum(more_one_hundred[1:] * 0.2)

    return result


assert np.isclose(calculate_tax(np.array([150]*12)), 286.5)
assert np.isclose(calculate_tax(np.array([100]*12)), 163)
assert np.isclose(calculate_tax(np.array([50]*12)), 78)
assert np.isclose(calculate_tax(np.array([1000]*12)), 2260)

assert np.isclose(calculate_tax(np.array(range(12))*100), 1215)
assert np.isclose(calculate_tax(np.array(range(11,-1,-1))*100), 1243)

def dummy(x):
    z = 0
    for y in x:
        z += y
        z += y*0.12
        if z:
            z += y
    return z

assert np.isclose(calculate_tax(np.array(range(12))*100), 1215)

N = int(1E6)
arr = np.array([1]*N)
benchmark = timeit("calculate_tax(arr)", "from __main__ import calculate_tax, arr", number=1)
reference_benchmark = timeit("dummy(arr)", "from __main__ import dummy, arr", number=1)

assert reference_benchmark > benchmark*5, "Код работает слишком медленно — вы точно использовали методы numpy?"





























































