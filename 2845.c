#include <stdio.h>

int main() {
    int L, P;
    scanf("%d %d", &L, &P);
    int S = L * P;
    int ar[5];

    scanf("%d %d %d %d %d", &ar[0], &ar[1], &ar[2], &ar[3], &ar[4]);
    printf("%d %d %d %d %d", ar[0]-S, ar[1]-S, ar[2]-S, ar[3]-S, ar[4]-S);
}