s = input()
n = len(s)
for i in range(n-1, -1, -1):
    if int(s[i]) % 2 != 0:
        print(s[:i+1])
        break
else:
    print(-1)