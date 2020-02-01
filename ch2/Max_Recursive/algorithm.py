def MAX(L,k=0):                     
    if k == len(L)-1:
        return L[k]
    return max(L[k],MAX(L,k=k+1))
    
