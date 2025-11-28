//Q115: Write a program to take two strings s and t as inputs (assume all characters are lowercase). The task is to determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies. Print "Anagram" if they are, otherwise "Not Anagram".

/*
Sample Test Cases:
Input 1:
s = "anagram", t = "nagaram"
Output 1:
Anagram

Input 2:
s = "rat", t = "car"
Output 2:
Not Anagram

*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) {
    return (*(char*)a - *(char*)b);
}

int main() {
    char s[1000], t[1000];
    scanf("%s %s", s, t);

    if(strlen(s) != strlen(t)) {
        printf("Not Anagram");
        return 0;
    }

    qsort(s, strlen(s), sizeof(char), cmp);
    qsort(t, strlen(t), sizeof(char), cmp);

    if(strcmp(s, t) == 0)
        printf("Anagram");
    else
        printf("Not Anagram");

    return 0;
}
