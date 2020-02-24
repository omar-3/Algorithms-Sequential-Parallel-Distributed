class Heap:
    def __init__(self):
        self.size = 0
        self.List = []
    def insert(self, x):
        self.List += [x]            # at the tail
        i = self.size
        j = (i-1)//2
        while j >= 0 and self.List[j] < x:
            self.List[i] = self.List[j]
            i = j
            j = (j-1)//2
        self.List[i] = x        
        self.size += 1
    def adjust(self, i):
        temp = self.List[i]
        found = False
        j = 2*i + 1
        while j < self.size and not found:
            if j < self.size - 1 and self.List[j] < self.List[j + 1]:
                j = j+1
            if temp >= self.List[j]:
                found = True
            else:
                self.List[(j-1)//2] = self.List[j]
                j = 2*j + 1
        self.List[(j-1)//2] = temp
    def remove(self):
        x = self.List[0]
        self.size -= 1
        self.List[0] = self.List[self.size]
        self.adjust(0)
        return x
    def makeHeap(self, iterable):
        self.size = len(iterable)
        self.List = iterable
        for i in range((self.size)//2,-1,-1):
            self.adjust(i)



    
x = [1,5,3,8,10,213,3543,76,234,43,6456,4234,54,5,235,1351,3342,54,1823]
omar = Heap()
omar.makeHeap(x)
print(omar.List)
omar.remove()
print(omar.List)
