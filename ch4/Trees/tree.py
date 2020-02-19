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
        if root is None: return root
        elif root.value > value:
            root.left = delete(root.left, value)
        elif root.value < value:
            root.right = delete(root.right, value)
        else:
            if root.left is None and root.right is None:
                root = None
                return root
            elif root.left is None:
                temp = root
                root = root.right
                temp = None
            elif root.right is None:
                temp = root
                root = root.left
                temp = None
            else:
                temp = self.minValueNode(root.right)
                root = temp
                root.right = delete(root.right, temp.value)
        return root

    def print2D(root, space):
        if root is None:
            return
        space+=10
        print2D(root.right, space)
        print("")
        for i in range(10, space):
            print("")
        print2D(root.left, space)
    
    def Print(root):
        print2D(root, 0)

        
        
