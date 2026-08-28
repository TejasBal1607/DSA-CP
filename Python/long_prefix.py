n = int(input())
strs = [input() for _ in range(n)]
strs.sort()
first = strs[0]
last = strs[n-1]
result = ""
for i in range(len(first)):
    if first[i] != last[i]:
        break
    result += first[i]
print(result)