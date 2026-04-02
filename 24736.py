def finalScore(T, F, S, P, C):
    return T*6 + F*3 + S*2 + P + C*2

Ta, Fa, Sa, Pa, Ca = map(int, input().split())
Tb, Fb, Sb, Pb, Cb = map(int, input().split())

print(str(finalScore(Ta, Fa, Sa, Pa, Ca)) + ' ' + str(finalScore(Tb, Fb, Sb, Pb, Cb)))