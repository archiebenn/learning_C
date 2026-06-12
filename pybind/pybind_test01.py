# pybind test 1 - comparing native python vs c++ speeds for sum of squares function (and np too for comparison)
# will import the C++ function using include
# this has already been compiled (see bottom of .cpp file)

import pybind_test01      # imports pybind module (compiled from c++ program and containing squares_sum)
import time
import numpy as np


# create equivalent function in python for squares sum
def py_squares_sum(a):

    i = 0
    total = 0

    for i in range(a +1):             # eqvn to cpp's i <= a; (+1 to capture a itself as range is to -1)

        total += i*i
    
    return total


# run both and compare times
n = 1000000000                  # sum squares up to n
print()

# PYTHON 
start = time.time()
py_squares_sum(n)
end = time.time()
py_time = end - start
print(f"Python time on {n} iterations: {py_time:.3f}s")

# C++ pybind 
start = time.time()
pybind_test01.cpp_square_sum(n)
end = time.time()
cpp_time = end - start
print(f"C++ time on {n} iterations: {cpp_time:.3f}s")

# numpy 
start = time.time()
(np.arange(n + 1, dtype=np.int64) ** 2).sum()
end = time.time()
print(f"NumPy time on {n} iterations: {end - start:.3f}s")



# example output!
# Python time on 1000000000 iterations: 59.476s
# C++ time on 1000000000 iterations: 0.649

