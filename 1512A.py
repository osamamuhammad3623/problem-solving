t = int(input())

for i in range(0,t):
    n = input()
    n_list = list( map(int, input().split())  )
    index = 1
    for element in n_list:
        if n_list.count(element) == 1:
            print(index)
            break
        index += 1
