#include <stdio.h>

int main() {
    int w;
    scanf("%d", &w);

    for(int i = 0; i < w; i++) {
        for(int p = 0; p < 5; p++) {
            for(int t = 0; t < w; t++) {
                printf("@");
          }
        }
        printf("\n");
    }
    for(int i = 0; i < 4; i++) {
        for(int p = 0; p < w; p++) {
            for(int t = 0; t < w; t++) {
                printf("@");
            }
            printf("\n");
        }
    }
}