//Q138: Print all enum names and integer values using a loop.

/*
Sample Test Cases:
Input 1:
No input
Output 1:
RED=0
YELLOW=1
GREEN=2

*/
#include <stdio.h>

enum Color { RED, YELLOW, GREEN };

int main() {
    char *names[] = { "RED", "YELLOW", "GREEN" };
    int n = 3; 

    for(int i = 0; i < n; i++) {
        printf("%s=%d\n", names[i], i);
    }

    return 0;
}

