#!/bin/python3
import math 
import random
sign = lambda x : math.copysign(1,x)

# I searched for an algorithm to get that bounding interval
# without making random choice and enourmous array but I couldn't fund any
# like I can't get results for any num over 1000 because of the enourmous
# array and random choice, let's see how c++ would be different


def bisection_root(c, error=0.1):
    function=lambda x : x**2 - c
    interval = [i for i in range(-1*c*100,c*100)]   #  this is arbitrary interval from which we would choose a and b
    a=b=0                                           #  and I have the feeling that It won't work for some functions
    while True:                                     #  but It I guess it would work for finding roots and stuff
        # getting the interval
        while True:
            if sign(function(a)) != sign(function(b)):
                break
            a = random.choice(interval)
            b = random.choice(interval)

        m = (a+b)/2

        if sign(function(m)) == 1.0:                        # that means it is positive
            if function(m) == 0:                            # that could happen if we got very very luck ... the algorithm gets it more than you think 
                return round(abs(m))                        # zeros is considerd positive
            a = m if (sign(function(m)) == 1.0) else (a)    # these tests are to ensure
            b = b if (a==m) else (m)                        # that we keep our interval of alternating signs
        elif sign(function(m)) == -1.0:                     # and also to shrink it and thus converging to the solution
            a = m if (sign(function(m)) == -1.0) else (a)
            b = b if (a==m) else (m)

        if abs(function(a)) < error: return round(abs(a))
        if abs(function(b)) < error: return round(abs(b))
        if abs(function(m)) < error: return round(abs(m))
 
print(bisection_root(144))



#######################################################################
#                                                                     #
#   here is my desperate attempt to have artbitrarly intervals        #
#   it converges "sometimes" ... please if you have any idea to do it #
#   please make it and I will send you nudes ;)                       #
#                                                                     #
#######################################################################

# a = 64*random.uniform(-100,100)
# b = 64*random.uniform(-100,100)
# h = 0.5
# interval = [i for i in range(-1*64*100,64*100)]
# a = b = 0
# direction = True
# error = 0.1
# while True:
#     for i in count(0):
#         if sign(function(a)) != sign(function(b)):
#             break
#         # finding the bounding interval in which the 
#         # sign of the function alternate is hard but I'm working on it
#         # meanwhile lets try very stochastic approach 
#         direction = not direction if i%100 else direction     #change signs
#         t = (-1 if direction else 1)*i
#         a = a-t
#         b = b+t
    
#     # once we got our interval we are sure we have a root in there
#     # we will get it very fast with a bound of (b-a)/2^n
#     # this is the easy part
    
#     m = (a+b)/2
#     if sign(function(m)) == 1.0:
#         if function(m) == 0:                    
#             print(m); sys.exit()
#         a = m if (sign(function(m)) == 1.0) else (a)
#         b = b if (a==m) else (m)
#     elif sign(function(m)) == -1.0:
#         a = m if (sign(function(m)) == -1.0) else (a)
#         b = b if (a==m) else (m)
    
#     if abs(function(a)) < error: print(a);sys.exit()
#     if abs(function(b)) < error: print(b);sys.exit()