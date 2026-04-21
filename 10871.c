#include <stdio.h>

int main() {
    int N, X;
    scanf("%d %d", &N, &X);
    int ary[N];
    for(int i = 0; i < N; i++)
        scanf("%d ", &ary[i]);

    for(int i = 0; i < N; i++) {
        if(ary[i] < X) printf("%d ", ary[i]);
    }
}