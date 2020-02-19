class node:         # you should consider using data classes for these structures
    def __init__(self, value):
        self.value = value
        self.left = None
        self.right = None


class tree:
    def __init__(self, value):
        self.root = node(value)
        self.V = 1
    def minValueNode(self, node):
        current = node
        while current is not None and current.left is not None:
            current = current.left
        return current
    def insert(self, value):
        currentNode = self.root
        fatherNode = None
        newNode = node(value)
        while currentNode is not None:
            fatherNode = currentNode
            if newNode.value < currentNode.value:
                currentNode = currentNode.left
            elif newNode.value > currentNode.value:
                currentNode = currentNode.right
            else:
                print(f'The value {value} cannot be inserted multiple times')
                return
        if fatherNode.value > newNode.value:
            fatherNode.left = newNode
        else:
            fatherNode.right = newNode
        self.V+=1
    def delete(self, root, value):
        
