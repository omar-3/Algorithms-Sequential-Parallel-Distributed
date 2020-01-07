#
#   It maybe harder to understand than left to right but its idea is quite simple.
#   It takes the largest power of two that can be represented with the number
#   and it computes it because any binary number has 1 in its MSB DUHHHHHHHH
#   then as you keep squaring this number you need to check bits from right
#   to left to compute the rest of the number and as your progress, once you found
#   1 in your scan/the number is odd you multiply the squaring number by the accumPow
#   which is initialized to be zero. my writing is so bad and my understanding is so hazy fml
#   ... trace the algorithm multiple time and it would be clear
#

def rtl_power(x,n):
    accum = 1
    product = x                         # this is the squaring number
    while n>1:
        if (n&1):                       # scanning part
            accum *= product
        n = n >> 1                      # we delete the LSB every iteration
        product *= product              # to make the final product is equal to the biggest power of 2
    product *= accum
    return product

