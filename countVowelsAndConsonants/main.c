#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool contains(char*, char);

int main() {
    char input[20];
    printf("Input a string:\n");
    scanf("%s", input);

    int len = strlen(input);
    char vowels[7] = {'a','o','u','e','i','y', '\0'};
    int vowelCounter = 0;
    int consonantCounter = 0;
    for (int i = 0; i < len; i++){
        if (contains(vowels, input[i])){
            vowelCounter++;
        } else {
            consonantCounter++;
        }
    }

    printf("Number of vowels: %d\n", vowelCounter);
    printf("Number of consonants: %d", consonantCounter);
    return 0;
}

bool contains(char* vowels, const char c){
    int len = strlen(vowels);

    for (int i = 0; i < len; i++){
        if (vowels[i] == c){
            return true;
        }
    }
    return false;
}
