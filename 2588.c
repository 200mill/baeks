#include <stdio.h>
#include <stdlib.h>

int main() {
    int A; char B[4];
    scanf("%d", &A);
    scanf("%s", B);
    printf("%d\n", A * (B[2] - '0'));
    printf("%d\n", A * (B[1] - '0'));
    printf("%d\n", A * (B[0] - '0'));
    printf("%d", A * strtol(B, NULL, 10));

    return 0;
}