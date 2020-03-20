def bingo_sort(L):
    minValue = min(L)
    maxValue = max(L)
    bingo = minValue
    next_bingo = maxValue
    nextIndex = 0
    while bingo < maxValue:
        startPosition = nextIndex
        for i in range(startPosition, len(L)):
            if L[i] == bingo: L[i], L[nextIndex] = L[nextIndex], L[i] ; nextIndex += 1      #BINGO
            if L[i] < next_bingo: next_bingo = L[i]
        bingo = next_bingo
        next_bingo = maxValue

L = [1,4,2,5,7,2,4,2,4,1,8,9,2,0,0,1,2,3,5,4,4,4,3,1,1,1,1,1]
bingo_sort(L)
print(L)
            