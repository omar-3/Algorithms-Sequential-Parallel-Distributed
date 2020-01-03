#   
#   The naive way to compute powers of numbers
#   takes O(n) in computing x^n, very inefficient 
#   in computing something like x^(10^83) it would take
#   number of multiplications more than the number of
#   atoms, but using algorithms like left-to-right or right-to-left
#   exponentiation would take O(log2(n)) which is about 276
#
#   the power n is assumed "forced" to be integer if you want to
#   float powers you need to use Taylor series expansion
#

def naive_power(x,n):
    product = x
    for i in range(1,n):
        product *= x
    return product


#####################################################################
#####################################################################

if __name__=="__main__":
    number = int(input("Enter the number:\t"))
    power = int(input("Enter the power:\t"))
    print(naive_power(number,power))