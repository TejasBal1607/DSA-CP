from collections import Counter, defaultdict

s = input()

count = Counter(s)
buckets = defaultdict(list)

for char, cnt in count.items():
    buckets[cnt].append(char)

res = []
for i in range(len(s), 0, -1):
    for c in buckets[i]:
        res.append(c*i)
print("".join(res))