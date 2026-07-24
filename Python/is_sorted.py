n = int(input())
nums = []
for _ in input().split():
    nums.append(int(_))

for i in range(1,n):
    if nums[i] < nums[i-1]:
        print("False")
        break
else:
    print("True")
