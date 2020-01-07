from algorithm import naive_power

def test1():
    num = 5
    power = 2
    assert naive_power(5,2) == 25

def test2():
    num = -1
    power = 3
    assert naive_power(-1,3) == -1

def test3():
    num = 3
    power = 3
    assert naive_power(3,3) == 27