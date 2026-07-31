n = int(input())
prices= []
for _ in input().split():
    prices.append(int(_))

minimum = prices[0]
profit = 0
for i in range(n):
    cost = prices[i] - minimum
    profit = max(profit, cost)
    minimum = min(minimum, prices[i])
print(profit)