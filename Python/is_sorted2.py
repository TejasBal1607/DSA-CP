n = int(input())
nums = []
for _ in input().split():
    nums.append(int(_))
drop_ctr = 0
for i in range(0,n):
    if nums[i] < nums[i-1]:
        drop_ctr += 1

if drop_ctr <= 1:
    print("True")
else:
    print("False")
