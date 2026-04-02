import string

def Load(attempts, type, re):
    attempts = int(attempts)
    if(type == 'C'):
        a = []
        for i in range(attempts):
            a.append(ord(re[i])-64)
        return a
    if(type == 'N'):
        d = []
        for i in range(attempts):
            d.append(chr(int(re[i])+64))
        return d
    
cases = int(input())
output = []
for i in range(cases):
    attempts, type = input().split()
    re = input().split()
    output.append(Load(attempts, type, re))
for i in range(cases):
    for t in range(len(output[i])):
        print(output[i][t], end=' ')
    print()