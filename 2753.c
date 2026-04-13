#include <stdio.h>

int main() {
    int year;
    scanf("%d", &year);
    int o = 0;

    if (year % 400 == 0) o = 1;
    else if(year % 100 == 0) o = 0;
    else if (year %4 == 0) o = 1;
    else o = 0;
    printf("%d", o);

    return 0;
}