from algorithm import split

def test():
    L=[4,2,1,9,10,23,12,4,8,19,91,19,83,75,32,65]
    split(L,0,len(L)-1) 
    assert L == [1, 2, 4, 4, 8, 9, 10, 12, 19, 19, 23, 32, 65, 75, 83, 91]