from algorithm import linear_search

def test():
    L = [1,343,12,123,54,6,34,9,102,86,62,41]
    assert linear_search(L, 6) == 5
    assert linear_search(L, 41)==11