from algorithm import binary_search

def test():
    L = [1,4,7,9,10,20,25,34,90,10]
    assert binary_search(L, 25) == 6
    assert binary_search(L, 1) == 0         #===> worst case
    assert binary_search(L,123123) == -1