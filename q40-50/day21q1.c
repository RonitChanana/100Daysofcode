//Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/
#include <stdio.h>

int main() {
    int num, first, last, temp, place = 1;

    scanf("%d", &num);
    temp = num;

    last = num % 10;

    while (temp >= 10) {
        temp /= 10;
        place *= 10;
    }

    first = temp;

    num = num - first * place - last; 
    num = num + last * place + first; 

    printf("%d", num);

    return 0;
}
