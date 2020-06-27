class Vertex:
    def __init__(self, id):
        self.id = id
        self.neighbors = {}
    def add_neighbor(self, id, weight):
        self.neighbors[id] = weight
    def get_neighbors(self):
        return self.neighbors.keys()
    def __str__(self):
        return f"This is node '{self.id}' and has {[node.id for node in self.neighbors]} as its neighbors"

class Graph:
    def __init__(self):
        self.vertices = {}
        self.num_vertices = 0
    def add_vertex(self, node):
        self.num_vertices += 1
        new_vertex = Vertex(node)
        self.vertices[node] = new_vertex
        return new_vertex
    def add_edge(self, frm, to, weight = 0):
        if frm not in self.vertices:
            self.add_vertex(frm)
        if to not in self.vertices:
            self.add_vertex(to)
        
        self.vertices[frm].add_neighbor(self.vertices[to], weight)
        self.vertices[to].add_neighbor(self.vertices[frm], weight)
    def __iter__(self):
        return iter(self.vertices.values())

    def __str__(self):
        return f"This graph has {self.num_vertices} vertex"
