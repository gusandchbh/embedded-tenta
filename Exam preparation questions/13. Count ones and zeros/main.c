#include <stdio.h>

int main() {

    int number;
    printf("Input any number:");
    scanf("%d", &number);

    int one_count = 0;
    int zero_count = 0;
    for (int i = 0; i < 32; i++){
        int val = number >> i & 1;
        if (val == 1){
            one_count++;
        } else {
            zero_count++;
        }
    }

    printf("Output of ones: %d\n", one_count);
    printf("Output of zeros: %d", zero_count);
    return 0;
}
