# learning_C
Learning C basics with the aim to move into C++. This is essentially out of interest for programming and to improve my understanding of higher level languages, but being able to read/write in these languages may also be helpful for come comp bio stuff in the future (I hope).

## C
Working through an old and short book on C I found (C programming by Mike Mcgrath, 2006) which covers data types, operations, functions, pointers/memory stuff, structs, I/O etc. 

The main plan is just to get for this lower level programming vs my background in R/Python before moving onto and focusing on C++.  

## C++
Will be coming soon!

## Python bindings with `pybind11`
Learning about implementing C++ code into Python scripts with pybind which could be v useful for offloading some computationally heavy aspects of Python scripts to C++ functions.  

So far, I have used for loops to get the sum of squares, with one written in C++ and one in Python (see `pybind/pybind_test01.cpp` and `.py`), to get this result to demonstrate binding usefulness: 

```
Python loop time on 1000000000 iterations: 61.283s
C++ loop time on 1000000000 iterations: 0.645s
```
