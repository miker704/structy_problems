# knight attack
# A knight and a pawn are on a chess board. Can you figure out the minimum number of moves required for the
#  knight to travel to the same position of the pawn? On a single move, the knight can move in an "L" shape;
#  two spaces in any direction, then one space in a
#  perpendicular direction. This means that on a single move, a knight has eight possible positions it can move to.
# https://structy-static.s3.amazonaws.com/knight-movement.png
# Write a function, knightAttack, that takes in 5 arguments:

# n, kr, kc, pr, pc

# n = the length of the chess board
# kr = the starting row of the knight
# kc = the starting column of the knight
# pr = the row of the pawn
# pc = the column of the pawn
# The function should return an int representing the minimum number of moves required for
#  the knight to land ontop of the pawn. The knight cannot move out-of-bounds of the board.
#   You can assume that rows and columns are 0-indexed. This means that if n = 8,
#   there are 8 rows and 8 columns numbered 0 to 7. If it is not possible for the knight to attack the pawn,
#    then return -1.

from collections import deque


# def knight_attack(n, kr, kc, pr, pc):
#     chess_board = build_board(n, kr, kc, pr, pc)
#     # print(chess_board)
#     queue = deque([])
#     queue.append([kr, kc, 0])
#     visited = set()
#     vaild_horsey_moves = [(-2, 1), (-2, -1), (2, 1),
#                           (2, -1), (-1, 2), (1, 2), (-1, -2), (1, -2)]
#     while len(queue) != 0:
#         curr_row, curr_col, count = queue.popleft()
#         if chess_board[curr_row][curr_col] == 'P':
#             return count
#         for move in vaild_horsey_moves:
#             mov_r, mov_c = move
#             next_row = curr_row+mov_r
#             next_col = curr_col+mov_c
#             new_pos = (next_row, next_col)
#             if is_board_bound(chess_board, next_row, next_col) and new_pos not in visited:
#                 visited.add(new_pos)
#                 queue.append([next_row, next_col, count+1])

#     return -1


# def is_board_bound(chess_board, row, col):
#     r_bound = 0 <= row and row < len(chess_board)
#     c_bound = 0 <= col and col < len(chess_board[0])
#     return r_bound and c_bound


# def build_board(n, kr, kc, pr, pc):
#     chess_board = [['X']*n for i in range(n)]
#     chess_board[kr][kc] = 'H'
#     chess_board[pr][pc] = 'P'
#     return chess_board

def knight_attack(n, kr, kc, pr, pc):


    return None


def get_horsey_moves(n, kr, kc):

    return 


print(knight_attack(8, 1, 1, 2, 2))  # -> 2
print(knight_attack(8, 1, 1, 2, 3))  # -> 1
print(knight_attack(8, 0, 3, 4, 2))  # -> 3
print(knight_attack(8, 0, 3, 5, 2))  # -> 4
print(knight_attack(24, 4, 7, 19, 20))  # -> 10
print(knight_attack(100, 21, 10, 0, 0))  # -> 11
print(knight_attack(3, 0, 0, 1, 2))  # -> 1
print(knight_attack(3, 0, 0, 1, 1))  # -> None
