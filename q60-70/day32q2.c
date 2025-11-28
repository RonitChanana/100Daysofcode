//Q64: Find the digit that occurs the most times in an integer number.

/*
Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

*/
#include <stdio.h>

int main() {
    int n, d, i, freq[10] = {0};
    scanf("%d", &n);

    while(n > 0) {
        freq[n % 10]++;
        n /= 10;
    }

    int max = 0;
    for(i = 0; i < 10; i++)
        if(freq[i] > freq[max]) max = i;

    printf("%d", max);
    return 0;
}
