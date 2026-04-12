elephants = list(map(int, input().split()))
carrot = 0
for i in range(14):
    if carrot <= elephants[i]:
        carrot = elephants[i] + 1
if carrot < elephants[14]:
    carrot = elephants[14]

print(carrot)