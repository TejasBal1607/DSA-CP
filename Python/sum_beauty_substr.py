s = input()
n = len(s)
ans = 0
for i in range(n):
    freq = [0] * 26
    for j in range(i, n):
        freq[ord(s[j]) - ord('a')] += 1
        max_freq = max(freq)
        min_freq = min(f for f in freq if f > 0)
        ans += (max_freq - min_freq)
print(ans)