import numpy as np

# We will use binary exponentiation in matrix multiplication because otherwise out logarithm complexity would
# be as fast as the dynamic programming with linear complexity 

# I will use right-to-left exponentiation because I think it is the most cleaner and
# we would avoid recursion of the typical binary exponentiation implementation


def power(m,n):
    accum = np.identity(len(m),dtype=int)
    product = m
    while n>1:
        if (n & 1):
            accum = np.dot(accum,product)
        n = n >> 1
        product = np.dot(product,product)
    product = np.dot(accum,product)
    return product

# 


def fib(n):
    a = [[0,1],[1,1]]
    b = [[0],[1]]
    return np.dot(power(a,n),b)[0][0]


# I will make chat for this particular problem because fibonacci computing problem
# is surprisingly well-researched 