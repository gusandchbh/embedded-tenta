#include <stdio.h>

int main() {
    printf("Input number:");
    int number;
    scanf("%d", &number);
    int bit;
    printf("Input nth bit number:");
    scanf("%d", &bit);

    int bitStatus = number >> bit & 1;
    printf("%d bit of %d is set (%d)", bit, number, bitStatus);
    return 0;
}
