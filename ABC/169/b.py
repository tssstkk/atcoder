n = int(input())
nums = list(map(int, input().split()))
sum = 1
flag = 1
upper = pow(10, 18)
for num in nums:
  if flag == 1:
    sum = sum * num
    if sum > upper:
      flag = 2
  if num == 0:
    flag = 0
    break
if flag == 2:
  print(-1)
else:
  print(sum * flag)
