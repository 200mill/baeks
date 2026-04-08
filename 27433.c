#include <stdio.h>

long long factorial(int n) {
    long long result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int target;

    scanf("%d", &target);
    printf("%lld", factorial(target));
    return 0;
}