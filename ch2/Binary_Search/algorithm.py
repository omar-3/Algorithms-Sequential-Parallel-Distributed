def binary_search(L, X):
    low = 0
    high = len(L)-1
    while low <= high:                          #this fails when we have one element so low and high are equals
        mid = (low+high)//2                    #and then we moved low one step up or high one step down
        if L[mid] == X:
            return mid
        elif X>L[mid]:
            low = mid + 1
        elif X<L[mid]:
            high = mid - 1
    return -1

L = [1,4,7,9,10,20,25,34,90,10]
print(binary_search(L, 25))
