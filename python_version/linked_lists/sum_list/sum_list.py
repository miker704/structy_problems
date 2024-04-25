# sum list
# Write a function, sum_list, that takes in the head of a linked list containing numbers as
#  an argument. The function should return the total sum of all values in the linked list.


class Node:
    def __init__(self, value):
        self.value = value
        self.next = None


def sum_list(head):
    result = 0
    curr = head
    while curr != None:
        result += curr.value
        curr = curr.next
    return result


def sum_list_recur(head):
    curr = head
    return _sum_list_recur(curr)
def _sum_list_recur(curr):
    if curr == None:
        return 0
    return curr.value + _sum_list_recur(curr.next)


print("iterative method")

a = Node(2)
b = Node(8)
c = Node(3)
d = Node(-1)
e = Node(7)

a.next = b
b.next = c
c.next = d
d.next = e

# 2 -> 8 -> 3 -> -1 -> 7

print(sum_list(a))  # 19


x = Node(38)
y = Node(4)

x.next = y

# 38 -> 4

print(sum_list(x))  # 42


z = Node(100)

# 100

print(sum_list(z))  # 100
print(sum_list(None))  # 0


print("recursive method")
print(sum_list_recur(a))  # 19
print(sum_list_recur(x))  # 42
print(sum_list_recur(z))  # 100
print(sum_list_recur(None))  # 0
