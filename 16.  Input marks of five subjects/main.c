#include <stdio.h>

int main() {
    double first;
    double second;
    double third;
    double fourth;
    double fifth;
    printf("Input marks of five subjects: \n");
    scanf("%lf", &first);
    scanf("%lf", &second);
    scanf("%lf", &third);
    scanf("%lf", &fourth);
    scanf("%lf", &fifth);

    double totalMarks =  first + second + third + fourth + fifth;
    double totalPoints = 500;
    double result = totalMarks/ totalPoints;
    result = result * 100;
    char grade = 'F';
    printf("Percentage = %0.2lf\n", result);
    if (result >= 90) {
        grade = 'A';
    } else if (result >= 80) {
        grade = 'B';
    } else if (result >= 70) {
        grade = 'C';
    } else if (result >= 60) {
        grade = 'D';
    } else if (result >= 40) {
        grade = 'E';
    } else {
        grade = 'F';
    }
    printf("Grade %c", grade);
    return 0;
}
