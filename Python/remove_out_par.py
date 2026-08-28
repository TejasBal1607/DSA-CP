s = input()
ctr = 0
for i in s:
    if i == '(':
        if ctr != 0:
            print(i, end='')
        ctr += 1
    elif i == ')':
        ctr -= 1
        if ctr != 0:
            print(i, end='')
