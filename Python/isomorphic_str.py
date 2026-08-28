s1 = input()
s2 = input()
n = len(s1)
if n != len(s2):
    print("NO")
map_s1 = {}
map_s2 = {}
check = 1
for c1, c2 in zip(s1, s2):
    if c1 in map_s1 and map_s1[c1] != c2:
        check = 0
    if c2 in map_s2 and map_s2[c2] != c1:
        check = 0
    map_s1[c1] = c2
    map_s2[c2] = c1

if check == 0:
    print("NO")
else:
    print("YES")