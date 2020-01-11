#
# instead of iteratively subtracting the smaller from the bigger
# to get the remainder of the bigger ... you just do that in one
# hit with modulo
#

def euclid_gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return a

