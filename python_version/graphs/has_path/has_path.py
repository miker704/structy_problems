# has path
# Write a function,
# hasPath, that takes in an unordered map representing the adjacency list of a directed acyclic graph and two nodes(src, dst).
# The function should return a boolean indicating whether or not there exists a directed path between the source and destination nodes.
# so you should be liberal with watching the
# Approach and Walkthrough.Be productive,
# not stubborn.- AZ

from collections import deque


def has_path_dfs(graph, src, dst):


    return False


def has_path_bfs(graph, src, dst):


    return False


graph = {
    'f': ['g', 'i'],
    'g': ['h'],
    'h': [],
    'i': ['g', 'k'],
    'j': ['i'],
    'k': []
}

print(has_path_dfs(graph, 'f', 'k'))  # True
print(has_path_bfs(graph, 'f', 'k'))  # True

graph = {
    'f': ['g', 'i'],
    'g': ['h'],
    'h': [],
    'i': ['g', 'k'],
    'j': ['i'],
    'k': []
}

print(has_path_dfs(graph, 'f', 'j'))  # False
print(has_path_bfs(graph, 'f', 'j'))  # False

graph = {
    'f': ['g', 'i'],
    'g': ['h'],
    'h': [],
    'i': ['g', 'k'],
    'j': ['i'],
    'k': []
}

print(has_path_dfs(graph, 'i', 'h'))  # True
print(has_path_bfs(graph, 'i', 'h'))  # True

graph = {
    'v': ['x', 'w'],
    'w': [],
    'x': [],
    'y': ['z'],
    'z': [],
}

print(has_path_dfs(graph, 'v', 'w'))  # True
print(has_path_bfs(graph, 'v', 'w'))  # True

graph = {
    'v': ['x', 'w'],
    'w': [],
    'x': [],
    'y': ['z'],
    'z': [],
}

print(has_path_dfs(graph, 'v', 'z'))  # False
print(has_path_bfs(graph, 'v', 'z'))  # False
