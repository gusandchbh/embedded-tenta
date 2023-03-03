#include <stdio.h>

int main() {
    int number;
    printf("Input any number: ");
    scanf("%d", &number);
    int count = 0;

    for (int i = 0; i < 32; i++){
        int val = number >> i & 1;
        if (val == 0){
            count++;
        } else {
            break;
        }
    }

    printf("Trailing zeros: %d", count);

    return 0;
}
