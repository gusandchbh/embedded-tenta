#include <stdio.h>
#include <stdlib.h>

int addNumbers(const int*, const int*);

int main() {
    printf("Enter the first number:");
    char first[10];
    fgets(first, 10, stdin);
    char second[10];
    int x = scanf("%d", )
    printf("Enter the second number:");
    fgets(second, 10, stdin);
    int firstNumber = atoi(first);
    int secondNumber = atoi(second);
    int result = addNumbers(&firstNumber, &secondNumber);
    printf("The sum of the entered numbers is: %d", result);
    return 0;
}

int addNumbers(const int* num1, const int *num2){
    return *num1 + *num2;
}

/*
 * ALTERNATIVELY
#include <stdio.h>

int main() {
    int num1, num2, sum;
    int *ptr1, *ptr2;

    printf("Input the first number: ");
    scanf("%d", &num1);

    printf("Input the second number: ");
    scanf("%d", &num2);

    // Assign the addresses of num1 and num2 to pointers ptr1 and ptr2
    ptr1 = &num1;
    ptr2 = &num2;

    // Add the values of the two pointers
    sum = *ptr1 + *ptr2;

    printf("The sum of the entered numbers is: %d", sum);

    return 0;
}
 */
