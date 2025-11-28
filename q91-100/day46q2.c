//Q92: Find the first repeating lowercase alphabet in a string.

/*
Sample Test Cases:
Input 1:
stress
Output 1:
s

*/
#include <stdio.h>

int main() {
    char str[100];
    int found = 0;

    scanf("%[^\n]", str);  // read full string

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] < 'a' || str[i] > 'z') continue; // skip non-lowercase

        for (int j = i + 1; str[j] != '\0'; j++) {
            if (str[i] == str[j]) {
                printf("%c", str[i]);
                found = 1;
                break;
            }
        }
        if (found) break;  // exit outer loop once found
    }

    if (!found) printf("No repeating character");

    return 0;
}
