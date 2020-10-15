line = input()
distinct_letter = []

for char in line :
    if char == '{' or char =='}' or char ==',' or char==' ':
        continue
    if char in distinct_letter:
        continue
    else:
        distinct_letter.append(char)
        
print(len(distinct_letter))