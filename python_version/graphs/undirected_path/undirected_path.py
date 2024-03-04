# undirected path
# Write a function, undirectedPath, that takes in a vector of edges for an undirected graph and two nodes (nodeA, nodeB).
#  The function should return a boolean indicating whether or not there exists a path between nodeA and nodeB.
def undirected_path(edges, node_A, node_B):
    
    return 


def has_path(graph, node_A, node_B, visited_nodes):

    return False


def build_undirected_graph(edges):
    

    return 


edges = [
    ('i', 'j'),
    ('k', 'i'),
    ('m', 'k'),
    ('k', 'l'),
    ('o', 'n')
]
print(undirected_path(edges, 'j', 'm'))  # -> True
edges = [
    ('i', 'j'),
    ('k', 'i'),
    ('m', 'k'),
    ('k', 'l'),
    ('o', 'n')
]
print(undirected_path(edges, 'm', 'j'))  # -> True
edges = [
    ('i', 'j'),
    ('k', 'i'),
    ('m', 'k'),
    ('k', 'l'),
    ('o', 'n')
]
print(undirected_path(edges, 'l', 'j'))  # -> True
edges = [
    ('i', 'j'),
    ('k', 'i'),
    ('m', 'k'),
    ('k', 'l'),
    ('o', 'n')
]
print(undirected_path(edges, 'k', 'o'))  # -> False
edges = [
    ('i', 'j'),
    ('k', 'i'),
    ('m', 'k'),
    ('k', 'l'),
    ('o', 'n')
]
print(undirected_path(edges, 'i', 'o'))  # -> False
edges = [
    ('b', 'a'),
    ('c', 'a'),
    ('b', 'c'),
    ('q', 'r'),
    ('q', 's'),
    ('q', 'u'),
    ('q', 't'),
]
print(undirected_path(edges, 'a', 'b'))  # -> True
edges = [
    ('b', 'a'),
    ('c', 'a'),
    ('b', 'c'),
    ('q', 'r'),
    ('q', 's'),
    ('q', 'u'),
    ('q', 't'),
]
print(undirected_path(edges, 'a', 'c'))  # -> True
edges = [
    ('b', 'a'),
    ('c', 'a'),
    ('b', 'c'),
    ('q', 'r'),
    ('q', 's'),
    ('q', 'u'),
    ('q', 't'),
]
print(undirected_path(edges, 'r', 't'))  # -> True
edges = [
    ('b', 'a'),
    ('c', 'a'),
    ('b', 'c'),
    ('q', 'r'),
    ('q', 's'),
    ('q', 'u'),
    ('q', 't'),
]
print(undirected_path(edges, 'r', 'b'))  # -> False
edges = [
    ('s', 'r'),
    ('t', 'q'),
    ('q', 'r'),
]
print(undirected_path(edges, 'r', 't'))  # -> True
