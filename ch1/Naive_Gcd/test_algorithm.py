from algorithm import naive_gcd


def test():
    assert naive_gcd(108,50) == 2
    assert naive_gcd(5,1) == 1
    assert naive_gcd(7,3) == 1
    assert naive_gcd(25,5) == 5