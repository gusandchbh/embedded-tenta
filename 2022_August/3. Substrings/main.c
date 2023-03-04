#include <stdio.h>


int contains_substring(const char *stringone, const char*substring);

int main() {
    char stringone[] = "hejsan";
    char substring[] = "san";
    int result = contains_substring(stringone, substring);
    if (result != -1) {
        printf("'%s' contains '%s' at position %d\n", stringone, substring, result);
    } else {
        printf("'%s' does not contain '%s'\n", stringone, substring);
    }
    return 0;
}

int contains_substring(const char *stringone, const char*substring){

    for (int i = 0; stringone[i] != '\0'; i++) {
        if (stringone[i] == substring[0]) {
            int flag = 1;
            for (int j = 0; substring[j] != '\0'; j++) {
                if (stringone[i + j] != substring[j]) {
                    flag = 0;
                    break;
                }
            }
            if (flag == 1) {
                return i;
            }
        }
    }
    return -1;
}
