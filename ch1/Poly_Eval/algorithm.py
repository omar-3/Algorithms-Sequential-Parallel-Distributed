# this takes strictly 2*n multiplication and n addition as upper bound 
# because maybe there is some a's equal to zero
# horner cuts number of multiplication to n

# a = [1,2,0,3,0,4,5,0,3] ==> 1+2*x + 3*x^3 + 4*x^5 + 5*x^6 + 3*x^8

def poly_eval(a, v):
    sum = a[0]
    product = 1
    for i in range(1, len(a)):
        product*=v
        sum+=a[i]*product
    return sum

