#
#   This is one of the two "smart" ideas to implement
#   power function: right to left, and left to right exponentiation.
#   The algorithm began scanning the binary representation of the power
#   from left to right and if it sees one multiply X by itself squared
#   if it sees zero, it just square X ... it is exactly like building 
#   the binary number from ground up and accordingly, it compute the number
#
#   It has complexity between log(n) to 2log(n) ===> see chat section to see the proof
#   but roughy speaking if your binary representation is just ones so you basically just
#   squaring (one multiplication) each iteration, if your binary representation is all zeros
#   you do the squaring (one multiplication) and also other multiplication of x (one multiplication)
#         

def ltr_power(x,n):
    product = 1
    binaryPow = binarize(n)
    for bit in binaryPow:
        product = x*(product**2) if int(bit) else product**2
    return product

###########################################################################
def binarize(n):    # binarize is an actual word :"D
    binary = ''
    while n > 0:
        binary = binary + str(n&1)
        n = n>>1
    return binary[::-1]

