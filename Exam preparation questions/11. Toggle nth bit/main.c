#include <stdio.h>

int main() {
    int number;
    printf("Input number:");
    scanf("%d", &number);
    int bit;
    printf("Input nth bit to toggle:");
    scanf("%d", &bit);


    number = number ^ (1 << bit);

    printf("After toggling nth bit: %d", number);

    return 0;
}
