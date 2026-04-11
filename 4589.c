#include <stdio.h>

int main() {
    int loops;
    scanf("%d", &loops);
    printf("Gnomes:\n");

    for(int i = 0; i < loops; i++) {
        int a,b,c;
        scanf("%d %d %d", &a, &b, &c);
        if((a<b && b<c) || (a>b && b>c)) {
            printf("Ordered");
        } else {
            printf("Unordered");
        }
        printf("\n");
    }
}