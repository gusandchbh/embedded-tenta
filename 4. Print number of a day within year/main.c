#include <stdio.h>

int main() {
    printf("Enter the month: ");
    int inputMonth;
    scanf("%d", &inputMonth);
    printf("Enter the day: ");
    int inputDay;
    scanf("%d", &inputDay);
    printf("Enter the year: ");
    int inputYear;
    scanf("%d", &inputYear);

    int months[12];
    months[0] = 31;
    if (inputYear % 4 == 0){
        months[1] = 29;
    } else {
        months[1] = 28;
    }
    months[2] = 31;
    months[3] = 30;
    months[4] = 31;
    months[5]= 30;
    months[6] = 31;
    months[7] = 31;
    months[8] = 30;
    months[9] = 31;
    months[10] = 30;
    months[11] = 31;

    int day = 0;
    for (int i = 0; i < inputMonth -1; i++){
        day += months[i];
    }

    printf("Days: %d", day + inputDay -1);


    return 0;
}
