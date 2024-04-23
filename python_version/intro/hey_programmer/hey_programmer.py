# write a functions that takes in a param string s and returns a string 'hey s'

def greet(s):
    return f'hey {s}'

if __name__== '__main__':
    print(greet("alvin")) #'hey alvin'
    print(greet("jason")) #'hey jason'
    print(greet("how now brown cow")) #'hey how now brown cow'