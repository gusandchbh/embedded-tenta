#include <stdio.h>
#include <string.h>

int main() {
    char string[1000];
    printf("Enter a string: ");
    fgets(string, 1000, stdin);
    int chars = 0;
    int words = 0;
    int lines = 0;
    for (int i = 0; string[i] != '\0'; i++) {
        if (string[i] == '\n') {
            lines++;
        } else if (string[i] == ' '){
            words++;
        } else {
            chars++;
        }
    }
    printf("\n");
    printf("Chars: %d\n", chars);
    printf("Words: %d\n", words +1);
    printf("Lines: %d\n", lines);

    return 0;
}
