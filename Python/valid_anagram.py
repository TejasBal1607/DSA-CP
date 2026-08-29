from collections import Counter

s1 = input()
s2 = input()

if len(s1) != len(s2):
    print("NO")
else:
    if Counter(s1) == Counter(s2):
        print("YES")
    else:
        print("NO")