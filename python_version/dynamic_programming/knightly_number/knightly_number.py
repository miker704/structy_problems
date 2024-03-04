
# knightly number
# A knight is on a chess board. Can you figure out the total number of ways the knight can move to a
#  target position in exactly m moves?
#  On a single move, the knight can move in an "L" shape; two spaces in any direction,
# then one space in a perpendicular direction. This means that on a single move, a knight has eight possible positions it can move to.

# Write a function, knightlyNumber, that takes in 6 arguments:

# n, m, kr, kc, pr, pc

# n = the length of the chess board
# m = the number of moves that must be used
# kr = the starting row of the knight
# kc = the starting column of the knight
# pr = the target row
# pc = the target column
# The function should return the number of different ways the
# knight can move to the target in exactly m moves. The knight can revisit
# positions of the board if needed. The knight cannot mov3 means that if n = 8, there are 8 rows and 8 columns numbered 0 to 7.


# def knightly_number(n, m, kr, kc, pr, pc):
#     return _knightly_number(n, m, kr, kc, pr, pc, {})


# def _knightly_number(n, m, kr, kc, pr, pc, progress):
#     pos = (m, kr, kc)
#     if pos in progress:
#         return progress[pos]
#     if m == 0:
#         if kr == pr and kc == pc:
#             return 1
#         else:
#             return 0
#     count = 0
#     horsey_moves = knight_movement(n, kr, kc)
#     for move in horsey_moves:
#         row, col = move
#         count += _knightly_number(n, m-1, row, col, pr, pc, progress)
#     progress[pos] = count
#     return progress[pos]


# def knight_movement(n, kr, kc):
#     valid_moves = [
#         (kr+-2, kc+1),
#         (kr+-2, kc+-1),
#         (kr+2, kc+1),
#         (kr+2, kc+-1),
#         (kr+-1, kc+2),
#         (kr+1, kc+2),
#         (kr+-1, kc+-2),
#         (kr+1, kc+-2),
#     ]
#     horsey_moves = []
#     for move in valid_moves:
#         row, col = move
#         if (is_board_bound(n, row, col) == True):
#             horsey_moves.append(move)
#     return horsey_moves


# def is_board_bound(n, kr, kc):
#     r_bound = 0 <= kr and kr < n
#     c_bound = 0 <= kc and kc < n
#     return r_bound and c_bound
def knightly_number(n, m, kr, kc, pr, pc):
  return 

def _knightly_number(n, m, kr, kc, pr, pc, memo):


  return 

print(knightly_number(8, 2, 4, 4, 5, 5))  # -> 2
print(knightly_number(8, 2, 7, 1, 7, 1))  # -> 3
print(knightly_number(8, 2, 5, 4, 5, 4))  # -> 8
print(knightly_number(8, 3, 5, 2, 4, 4))  # -> 21
print(knightly_number(20, 6, 18, 7, 10, 15))  # -> 60
print(knightly_number(20, 12, 8, 3, 9, 14))  # -> 98410127
print(knightly_number(8, 2, 0, 0, 1, 1))  # -> 0
