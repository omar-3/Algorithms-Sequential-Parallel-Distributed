from algorithm import euclid_gcd

def test():
    assert euclid_gcd(108, 50) == 2
    assert euclid_gcd(25, 5) == 5
    assert euclid_gcd(5, 1) == 1