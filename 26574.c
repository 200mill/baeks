#include <stdio.h>

int main() {
    int L;
    scanf("%d", &L);
    for(int i = 0; i < L; i++) {
        int t;
        scanf("%d", &t);
        printf("%d %d\n", t, t);
    }

    return 0;
}