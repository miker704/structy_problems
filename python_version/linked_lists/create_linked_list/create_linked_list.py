
# create linked list
# Write a function, createLinkedList, that takes in an array of values as an argument.
#  The function should create a
#  linked list containing each element of the array as the values of the nodes. The function
#  should return the head of the linked list.

class Node:
    def __init__(self, val):
        self.val = val
        self.next = None


def create_linked_list(values):

    return 

def create_linked_list_recur(values):
    return 


def create_linked_list_recur_exe(values, idx):

    return 


def print_list(head):
    curr = head
    while curr is not None:
        print(f'[{curr.val}|next]--->')
        curr = curr.next
    return


print_list(create_linked_list(["h", "e", "y"]))
print_list(create_linked_list_recur(["h", "e", "y"]))

# h -> e -> y
print_list(create_linked_list([1, 7, 1, 8]))
print_list(create_linked_list_recur([1, 7, 1, 8]))

# 1 -> 7 -> 1 -> 8
print_list(create_linked_list(["a"]))
print_list(create_linked_list_recur(["a"]))

# a
print_list(create_linked_list([]))
print_list(create_linked_list_recur([]))

# null
