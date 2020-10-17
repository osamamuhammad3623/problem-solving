keyboard = [
    
    ['q','w','e','r','t','y','u','i','o','p'],
    ['a','s','d','f','g','h','j','k','l',';'],
    ['z','x','c','v','b','n','m',',','.','/']
    
    ]

def get_location(char):
    for row in range(10):
        for col in range(10):
            if keyboard[row][col] == char:
                return (row,col)

shift  = input()

word = input()
new_word = ''

if shift == "R" :
    
    for char in word:
        (row,col) = get_location(char)
        new_word += keyboard[row][col-1]
else:
    for char in word:
        (row,col) = get_location(char)
        new_word += keyboard[row][col+1]
        
print (new_word)