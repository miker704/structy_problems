# tolerant teams
# Write a function, tolerantTeams, that takes in a vector of rivalries
# as an argument. A rivalry is a pair of people who should not be placed
#  on the same team. The function should return a boolean indicating whether or not it is possible to
#  separate people into two teams, without rivals being on the same team.
#  The two teams formed do not have to be the same size.

def tolerant_teams(rivalries):

    return 


def build_teams(rivalries):

    return 


def parse_teams(graph, color_coding, node, curr_color):

    return


print(tolerant_teams([
    ('philip', 'seb'),
    ('raj', 'nader')
]))  # -> True
print(tolerant_teams([
    ('philip', 'seb'),
    ('raj', 'nader'),
    ('raj', 'philip'),
    ('seb', 'raj')
]))  # -> False
print(tolerant_teams([
    ('cindy', 'anj'),
    ('alex', 'matt'),
    ('alex', 'cindy'),
    ('anj', 'matt'),
    ('brando', 'matt')
]))  # -> True
print(tolerant_teams([
    ('alex', 'anj'),
    ('alex', 'matt'),
    ('alex', 'cindy'),
    ('anj', 'matt'),
    ('brando', 'matt')
]))  # -> False
print(tolerant_teams([
    ('alan', 'jj'),
    ('betty', 'richard'),
    ('jj', 'simcha'),
    ('richard', 'christine')
]))  # -> True
print(tolerant_teams([
    ('alan', 'jj'),
    ('betty', 'richard'),
    ('jj', 'simcha'),
    ('richard', 'christine')
]))  # -> True
print(tolerant_teams([
    ('alan', 'jj'),
    ('jj', 'richard'),
    ('betty', 'richard'),
    ('jj', 'simcha'),
    ('richard', 'christine')
]))  # -> True
print(tolerant_teams([
    ('alan', 'jj'),
    ('betty', 'richard'),
    ('betty', 'christine'),
    ('jj', 'simcha'),
    ('richard', 'christine')
]))  # -> False
