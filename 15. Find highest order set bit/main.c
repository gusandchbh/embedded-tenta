#include <stdio.h>

int main() {
    printf("Input any number:");
    int number;
    scanf("%d", &number);
    int highestOrder = 0;
    for (int i = 0; i < 32; i++){
        int val = number >> i & 1;
        if (val == 1) {
            highestOrder = i;
        }
    }
    printf("Highest order set bit in %d is %d", number, highestOrder);

    return 0;
}
