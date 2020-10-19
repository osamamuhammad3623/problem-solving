n = int (input())

word = input ()
word = word.lower()

# adding all the char to a Set, so there's no duplicates
letter = set()

for char in word:
    letter.add(char)
    
# if length of the set is 26, then all the alphabet is in the set!
if len(letter) == 26:
    print("YES")
else:
    print("NO")