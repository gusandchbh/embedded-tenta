#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char str1[20];
    char str2[20];
    printf("Enter the first string: ");
    scanf("%s", str1);
    printf("Enter the second string: ");
    scanf("%s", str2);

    int len1 = strlen(str1); // get length of string1
    int len2 = strlen(str2); // get length of string2

    char* combinedStr = (char*) malloc(sizeof(char) * (len1 + len2 + 1)); // allocate memory for combined string

    // copy string1 to combined string
    for (int i = 0; i < len1; i++) {
        combinedStr[i] = str1[i];
    }

    // copy string2 to combined string
    for (int i = 0; i < len2; i++) {
        combinedStr[len1 + i] = str2[i];
    }

    combinedStr[len1 + len2] = '\0'; // add null terminator to end of combined string

    printf("Concatenated string: %s", combinedStr); // print combined string

    free(combinedStr); // free memory allocated for combined string

    return 0;
}
