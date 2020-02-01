from algorithm import decimal_to_binary

def test1():
    number = 10
    assert decimal_to_binary(number) == "1010"

def test2():
    number = 108
    assert decimal_to_binary(number) == "1101100"
    