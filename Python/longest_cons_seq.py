n = int(input())
nums = []
for i in input().split():
    nums.append(int(i))

s = set(nums)
ctr = 0
longest = 0
for i in s:
    if i-1 not in s:
        j = i
        while j in s:
            j += 1
            ctr += 1
        longest = max(longest, ctr)
        ctr = 0
print(longest)