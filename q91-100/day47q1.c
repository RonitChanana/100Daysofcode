//Q93: Check if two strings are anagrams of each other.

/*
Sample Test Cases:
Input 1:
listen
silent
Output 1:
Anagrams

Input 2:
hello
world
Output 2:
Not anagrams

*/
#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int found, count1, count2;

    scanf("%s", str1);
    scanf("%s", str2);

    // Check if lengths are different
    if (strlen(str1) != strlen(str2)) {
        printf("Not anagrams");
        return 0;
    }

    // Loop through each character of str1
    for (int i = 0; str1[i] != '\0'; i++) {
        count1 = 0;
        count2 = 0;

        // Count occurrences in str1
        for (int j = 0; str1[j] != '\0'; j++) {
            if (str1[i] == str1[j])
                count1++;
        }

        // Count occurrences in str2
        for (int j = 0; str2[j] != '\0'; j++) {
            if (str1[i] == str2[j])
                count2++;
        }

        // If counts differ, not anagrams
        if (count1 != count2) {
            printf("Not anagrams");
            return 0;
        }
    }

    printf("Anagrams");
    return 0;
}
