
# a = [1,2,0,3,0,4,5,0,3] #==> 1+2*x + 3*x^3 + 4*x^5 + 5*x^6 + 3*x^8

# n multiplication and n addition at most ... smart 

def horner_eval(a, v):
    n = len(a)-1
    sum = a[n]
    for i in range(n-1, -1, -1):    #==> the second negative is to iterate untill a[0]
        sum = sum*v + a[i]
    return sum

