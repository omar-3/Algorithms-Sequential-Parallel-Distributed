# It take sorted list and assumes that they are strictly linear to run perfectly 
# It druns really really fast if you took care of the division in the line equation and the data is fairly linear
# I guess this is the first algorithm which deserves file in the chat section

def interpolation_search(L, X):
    low = 0
    high = len(L)-1
    while low<=high:
        i = ((((X-L[low])*(high-low))//(L[high]-L[low]))+low)          #line equation of the "linear" data ... pay attention of that integer division
        if X == L[i]:
            return i
        elif X < L[i]:
            high = i-1
        elif X > L[i]:
            low = i+1
    return -1


L=[1,2,3,4,5,6,7,8,9,10,11,13,15,18]
print(interpolation_search(L,10))

