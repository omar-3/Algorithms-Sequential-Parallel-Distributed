def InsertionSubSort(L, k):
    n = len(L)
    for i in range(k, n):
        current = L[i]
        position = i-k
        while position >= 0 and current < L[position]:
            print("omar")
            L[position + k] = L[position]
            position -= k
        L[position + k] = current


def ShellSort(L,k):
    m = len(k)
    for i in range(m):
        InsertionSubSort(L,k[i])

