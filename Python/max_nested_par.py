s = input()
ctr = 0
depth = 0
for i in s:
    if i == '(':
        ctr += 1
        depth = max(depth, ctr)
    elif i == ')':
        ctr -= 1
print(depth)