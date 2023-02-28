#include <stdio.h>
#include <stdbool.h>
#include <string.h>

/*
 * Write a program in C to check whether two given strings are an anagram.
 * You must use pointers in this task.
 * Test Data :
 * Input the first String : spare
 * Input the second String : pears
 * Expected Output :
 * spare and pears are Anagram.
 */
bool validAnagram(char* first, char* second);

int main() {
    char first[20];
    char second[20];
    printf("Enter the first word:");
    scanf("%s", first);
    printf("Enter the second word: ");
    scanf("%s", second);
    printf("\n");

    if (validAnagram(first, second) == true){
        printf("%s and %s are Anagram", first, second);
    } else {
        printf("%s and %s are not Anagram", first, second);
    }
    return 0;
}

bool validAnagram(char* first, char* second){
    if (strlen(first) != strlen(second)){
        return false;
    }
    int counter = 0;
    for (int i = 0; i < strlen(first); i++){
        for (int j = 0; j < strlen(first); j++){
            if (first[i] == second[j]){
                counter++;
                break;
            }
        }
    }
    return strlen(first) == counter;
}


