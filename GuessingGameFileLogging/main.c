#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX_NUMBER 20
#define MAX_STEPS 6


int main() {
    printf("Welcome to the guessing game!\n");
    printf("Enter your name:");
    srand(time(NULL));
    char name[100];
    scanf("%s", name);
    FILE *fptr;
    fptr = fopen("log.txt", "w");
    if (fptr == NULL){
        printf("LOOOL");
        return 1;
    }
    fprintf(fptr, "Name: %s", name);

    int counter = 1;
    int number = rand() % MAX_NUMBER;
    char input[100];
    printf("Enter a guess between 0 and %d\n", MAX_NUMBER);

    while (scanf("%s", input) != 'Q'){
        fprintf(fptr, "\nRound %d!\n", counter);
        int guess = atoi(input);
        if (guess < number){
            printf("Guess was too low!");
            fprintf(fptr, "Guess %d was too low!\n", guess);
            counter++;
        } else if (guess > number) {
            printf("Guess was too high!");
            fprintf(fptr, "Guess %d was too high!\n", guess);
            counter++;
        } else if (guess == number){
            printf("Guess was correct!");
            fprintf(fptr, "Guess %d was correct!\n", guess);
            break;
        }
        if (counter == MAX_STEPS){
            printf("You ran out of guesses!");
            fprintf(fptr, "You ran out of guesses!");
        }
    }
    fclose(fptr);

    return 0;
}
