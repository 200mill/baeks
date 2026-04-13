#include <stdio.h>

int main() {
    long long int N, M;

    scanf("%lld %lld", &N, &M);

    // 첫째 줄에 두 유명도의 차이 (|N-M|)을 출력한다.
    long long int output = N - M;
    if (output < 0) output *= -1;

    printf("%lld", output);

    return 0;
}