#
# how to visualize the GCD algorithm in general is really fun, put aside the definition
# imagining the two numbers like two rods the algorithm sees how many of the little rod  
# (a or b) could fit into the larger rod and to get the GCD we need to find the biggest
# little rod which could fir the larger rod without leaving any remainder
# you can achieve that with multiple operation like in this algorithm or you can cut to the chase
# and get the remainder and see if it is zero
#


#
#   you can't get floating point 
#

def naive_gcd(a,b):
    while a != b:
        if a > b:
            a = a - b
        else:
            b = b - a
    return a        # and you can return b also because at this point the the little rod has
                    # consumed all the bigger rod except one part and could fit exactly into the larger part

