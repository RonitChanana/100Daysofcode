///Q20: Write a program to display the day of the week based on a number (1–7) using switch-case.

/*
Sample Test Cases:
Input 1:
1
Output 1:
Monday

Input 2:
5
Output 2:
Friday

*/
#include<stdio.h>
int main(){
    int n;

    printf ("Enter the value of n:");
    scanf ("%d",&n);

    switch (n){
        case 1:
        printf ("Monday");
        break;
         case 2:
        printf ("tuesday");
        break;
         case 3:
        printf ("wednesday");
        break;
         case 4:
        printf ("thrusday");
        break;
         case 5:
        printf ("friday");
        break;
         case 6:
        printf ("saturday");
        break;
         case 7:
        printf ("sunday");
        break;
        default :
        printf ("not a valid day");
    }
    return 0;
}
