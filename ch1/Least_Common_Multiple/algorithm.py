import math 

# you want to get the largest value which could be divisible
# by both a and b ... the result of multiplication both of them
# and multiply it by 1 ... you have the largest multiple ( check GCF )
# we want to maximize this "one" as much as possible which is common divison
# so it is GREATEST common divisor

def least_common_multiple(a, b):
    return (a*b)/math.gcd(a,b)

print(least_common_multiple(12,15))