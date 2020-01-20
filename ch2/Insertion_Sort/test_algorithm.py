from algorithm import insetion_sort

def test1():
    L = [4,2,6,8,1,2,6,8,2,3]
    assert insetion_sort(L) == [1, 2, 2, 2, 3, 4, 6, 6, 8, 8]

def test2():
    L = [2,4,1]
    assert insetion_sort(L) == [1,2,4]
    