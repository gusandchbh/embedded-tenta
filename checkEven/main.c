#include <stdio.h>

int main() {
    printf("Enter a number to check if it's even: ");
    int number;
    scanf("%d", &number);
    int x = number & 0b00000001;
    if (x != 0){
        printf("Number not even");
    } else {
        printf("Number is even");
    }
}
