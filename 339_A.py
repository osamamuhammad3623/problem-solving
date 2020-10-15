s = input()

numbers = s.split('+')


sorted_num = sorted(numbers)

new_s = ""
for n in sorted_num:
    new_s += n + '+'
    
print (new_s[:len(new_s) -1])