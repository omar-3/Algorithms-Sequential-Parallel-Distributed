def naive_poly_mult(P, Q):
    """ 
    Keyword arguments:
    P -- The dictionary of first polynomial
    Q -- The dictionary of second polynomial

    return dictionary with keys as powers of X
    and values as coefficient associated with the 
    respective keys.
    """

    # The product polynomial
    M = {k : 0 for k in range(len(P) + len(Q) - 1)}

    for i in P:
        for j in Q:
            M[i+j] = M[i+j] + P[i] * Q[j]

    return M


#
# This is obvious theta(m*n) because of the nested for loops
# And it is theta not O because it is strictly m*n and can't go higher
#

#
# This is the example in page 239 in the bottom of the page
#

P = {0 : -5, 1 : 2, 2 : 3}
Q = {0 :  4, 1 : -1, 2 : 0, 3 : 1}

print(naive_poly_mult(P, Q))

