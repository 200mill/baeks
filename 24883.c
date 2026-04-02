#include <stdio.h>

int main() {
    char input;
    scanf("%c", &input);
    if(input == 'n' || input == 'N') {
        printf("Naver D2");
    } else {
        printf("Naver Whale");
    }

    return 0;
}