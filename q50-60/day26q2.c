// Q52: Write a program to print the following pattern:

// *

// *
// *
// *

// *
// *
// *
// *
// *

// *
// *
// *

// *



/*
Sample Test Cases:
Input 1:

Output 1:
Pattern with stars spaced irregularly as shown.

*/
#include <stdio.h>

int main() {
    int n = 5;

    for (int i = 1; i <= n; i++) {
        int count;

        
        if (i == 1 || i == 5)
            count = 1;
        else if (i == 2 || i == 4)
            count = 3;
        else
            count = 5;

       
        for (int j = 1; j <= count; j++) {
            printf("*\n");
        }

        
        if (i != n)
            printf("\n");
    }

    return 0;
}
