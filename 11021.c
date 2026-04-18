#include <stdio.h>

int main() {
    int L;
    scanf("%d", &L);

    for(int i = 0; i < L; i++) {
        int A, B;
        scanf("%d %d", &A, &B);
        printf("Case #%d: %d\n", i+1, A+B);
    }
}