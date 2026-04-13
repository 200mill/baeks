#include <stdio.h>

int main() {
    int in[5];

    scanf("%d %d %d %d %d", &in[0], &in[1], &in[2], &in[3], &in[4]);

    int out = 0;
    for(int i = 0; i < 5; i++) out += in[i] * in[i];
    printf("%d", out%10);

    return 0;
}