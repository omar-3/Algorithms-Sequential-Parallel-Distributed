#
# For me I'd use it instead ltr or rtl 
# it is much more clear and follow the
# exact scheme as the recurrence relation itself
#


def recursion_pow(x, n):
    if n == 1:
        pow = x
    else:
        if not (n&1):   #even
            pow = recursion_pow(x*x,n/2)
        else:
            pow = x*recursion_pow(x*x,(n-1)/2)
    return pow

print(recursion_pow(5,2))
