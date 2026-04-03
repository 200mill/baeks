#include <stdio.h>
#include <math.h>

#define cost 2000

int main() {
    int money;
    scanf("%d", &money);
    int count = floor(money/cost);

    printf("%d", count);

    return 0;
}