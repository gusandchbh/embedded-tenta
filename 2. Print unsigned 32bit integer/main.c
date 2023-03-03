#include <stdio.h>
#include <stdint.h>

void print_bin(uint32_t n) {
    for (int i = 31; i >= 0; i--) {
        printf("%d", (n >> i) & 1);
        if (i % 8 == 0 && i != 0) {
            printf(".");
        }
    }
}
uint16_t make_16bit(uint8_t least_significant, uint8_t most_significant);

int main() {
    uint32_t num1 = 0;
    uint32_t num2 = 1;
    uint32_t num3 = 2;
    uint32_t num4 = 43;
    uint32_t num5 = 123456789;

    printf("num1: ");
    print_bin(num1);
    printf("\n");

    printf("num2: ");
    print_bin(num2);
    printf("\n");

    printf("num3: ");
    print_bin(num3);
    printf("\n");

    printf("num4: ");
    print_bin(num4);
    printf("\n");

    printf("num5: ");
    print_bin(num5);
    printf("\n\n");

    printf("PART TWO\n\n");

    uint8_t least_significant = 7;
    printf("7: ");
    print_bin(least_significant);
    printf("\n");

    uint8_t most_significant = 1;
    printf("1: ");
    print_bin(most_significant);
    printf("\n");

    printf("Combined:");
    print_bin(make_16bit(7, 1));
    printf("\n");


    return 0;
}

uint16_t make_16bit(uint8_t least_significant, uint8_t most_significant){
        uint16_t result = most_significant << 8 | least_significant;
        return result;
}
