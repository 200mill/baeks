#include <stdio.h>

int max(int x, int y, int z) {
    int m = x;
    if (y > m) m = y;
    if (z > m) m = z;
    return m;
}

int main() {
    for(;;) {
        int A, B, C;
        scanf("%d %d %d", &A, &B, &C);
        if (A == 0 && B == 0 && C == 0) break;
        int m = max(A, B, C);
        if( m * m ==  A * A + B * B + C * C - m * m) printf("right\n");
        else printf("wrong\n");
    }
}