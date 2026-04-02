rs = input()
cars = input().split()

illegal = 0

for i in range(5):
    if cars[i] == rs:
        illegal += 1
print(illegal)