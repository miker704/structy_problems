# has cycle
# Write a function, hasCycle, that takes in an unordered map representing the adjacency
# list of a directed graph. The function should return a boolean indicating whether
# or not the graph contains a cycle.


def has_cycle(graph):


    return False


def _has_cycle(graph, grey, black, node):


    return False


print(has_cycle({
    "a": ["b"],
    "b": ["c"],
    "c": ["a"],
}))  # -> True
print(has_cycle({
    "a": ["b", "c"],
    "b": ["c"],
    "c": ["d"],
    "d": [],
}))  # -> False
print(has_cycle({
    "a": ["b", "c"],
    "b": [],
    "c": [],
    "e": ["f"],
    "f": ["e"],
}))  # -> True
print(has_cycle({
    "q": ["r", "s"],
    "r": ["t", "u"],
    "s": [],
    "t": [],
    "u": [],
    "v": ["w"],
    "w": [],
    "x": ["w"],
}))  # -> False
print(has_cycle({
    "a": ["b"],
    "b": ["c"],
    "c": ["a"],
    "g": [],
}))  # -> True
print(has_cycle({
    "a": ["b"],
    "b": ["c"],
    "c": ["d"],
    "d": ["b"],
}))  # -> True
