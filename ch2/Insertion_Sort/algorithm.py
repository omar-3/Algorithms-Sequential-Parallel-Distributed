def insetion_sort(L):
    n = len(L)
    for i in range(1,n):
        # I will find the interval in which I need
        # to shift and then I will do right rotation
        # I guess if I ignored all python boilerplate
        # It is a tad efficient
        firstElement = i-1
        while firstElement>=0 and L[firstElement]>L[i]:
            firstElement-=1
        firstElement+=1                                 # so the list to be right rotated in L[firstElement:i] inclusive interval
        L[firstElement:i+1]=L[i:i+1]+L[firstElement:i]
    return L

# if right rotation is a bit cleaner It would make it very elegant because this is AS clean as the original

L = [4,2,6,8,1,2,6,8,2,3]
print(insetion_sort(L))

