s = input()
n = len(s)
res = ""
resl = 0
for i in range(n):
    l,r = i,i
    while(l>= 0 and r<n and s[l] == s[r]):
        if(r-l+1 > resl):
            res = s[l:r+1]
            resl = r-l+1
        l -= 1
        r += 1
    l,r=i,i+1
    while(l>=0 and r<n and s[l]==s[r]):
        if(r-l+1 > resl):
            res = s[l:r+1]
            resl = r-l+1
        l -= 1
        r += 1
print(res)