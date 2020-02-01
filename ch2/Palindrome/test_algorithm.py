from algorithm import palindrome

def test1():
    string = "abcba"
    assert palindrome(string) == True

def test2():
    string = "bdbas"
    assert palindrome(string) == False
    