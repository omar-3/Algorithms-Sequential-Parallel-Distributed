#
# it is really simple and cool
# you just keep the result of multiplying
# both sides of the square result the same  
# as a 
# and terminate the algorithm when both sides are nearly equal 
#

def square(a, error=0.0001):
    x = a
    while (x - a/x) > error:
        x = (x + a/x)/2
    return x

