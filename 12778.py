import string

def Load(attempts, type, re):
    #attempts, type = input().split()
    #re = input().split()
    attempts = int(attempts)
    if(type == 'C'):
        a = []
        for i in range(len(attempts)):
            a.append(ord(re[i])-64)
        return a
    if(type == 'D'):
        d = []
        for i in range(len(attempts)):
            d.append(str.encode(encoding='ascii', self=re[i]+64))
        return d
    
cases = int(input())
output = []
for i in range(cases):
    attempts, type = input().split()
    re = input().split()
    output.append(Load(attempts, type, re))
for i in range(cases):
    print(output[i])