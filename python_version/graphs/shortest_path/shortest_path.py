# shortest path
# Write a function, shortest_path, that takes in a list of edges for an undirected graph and
# two nodes (node_A, node_B). The function should return the length of the shortest path between A and B. Consider
#  the length as
#  the number of edges in the path, not the number of nodes. If there is no path between A and B, then return -1.

from collections import deque


def shortest_path(edges, node_A, node_B):

    return -1


def build_graph(edges):

    return 


edges = [
    ['w', 'x'],
    ['x', 'y'],
    ['z', 'y'],
    ['z', 'v'],
    ['w', 'v']
]

print(shortest_path(edges, 'w', 'z'))  # -> 2
edges = [
    ['w', 'x'],
    ['x', 'y'],
    ['z', 'y'],
    ['z', 'v'],
    ['w', 'v']
]

print(shortest_path(edges, 'y', 'x'))  # -> 1
edges = [
    ['a', 'c'],
    ['a', 'b'],
    ['c', 'b'],
    ['c', 'd'],
    ['b', 'd'],
    ['e', 'd'],
    ['g', 'f']
]

print(shortest_path(edges, 'a', 'e'))  # -> 3
edges = [
    ['a', 'c'],
    ['a', 'b'],
    ['c', 'b'],
    ['c', 'd'],
    ['b', 'd'],
    ['e', 'd'],
    ['g', 'f']
]

print(shortest_path(edges, 'e', 'c'))  # -> 2
edges = [
    ['a', 'c'],
    ['a', 'b'],
    ['c', 'b'],
    ['c', 'd'],
    ['b', 'd'],
    ['e', 'd'],
    ['g', 'f']
]

print(shortest_path(edges, 'b', 'g'))  # -> -1
edges = [
    ['c', 'n'],
    ['c', 'e'],
    ['c', 's'],
    ['c', 'w'],
    ['w', 'e'],
]

print(shortest_path(edges, 'w', 'e'))  # -> 1
edges = [
    ['c', 'n'],
    ['c', 'e'],
    ['c', 's'],
    ['c', 'w'],
    ['w', 'e'],
]

print(shortest_path(edges, 'n', 'e'))  # -> 2
edges = [
    ['m', 'n'],
    ['n', 'o'],
    ['o', 'p'],
    ['p', 'q'],
    ['t', 'o'],
    ['r', 'q'],
    ['r', 's']
]

print(shortest_path(edges, 'm', 's'))  # -> 6
