from algorithm import MAX

def test1():
    L = [1,5,2,9,10,2,329,1,4]
    assert MAX(L) == 329

def test2():
    L = [-10,-20,-343,-10,-3,-123]
    assert MAX(L) == -3