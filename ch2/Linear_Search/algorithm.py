def linear_search(L, X):
    for i in range(len(L)):
        if L[i] == X:
            return i
    return -1

