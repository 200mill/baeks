#include <stdio.h>

int main() {
    int loops;
    scanf("%d", &loops);

    for(int i = 0; i < loops; i++) {
        int A,B;
        scanf("%d %d", &A, &B);
        printf("%d\n", A+B);
    }

    return 0;
}