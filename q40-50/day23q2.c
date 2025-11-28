// Q46: Write a program to print the following pattern:
// *****
// *****
// *****
// *****
// *****

/*
Sample Test Cases:
Input 1:

Output 1:
*****
*****
*****
*****
*****

*/
#include<stdio.h>
int main(){
    int r;
    printf ("enter the value of r :");
    scanf ("%d",&r);
    for (int i=1;i<=r;i++){
        for (int j=1;j<=r;j++){
            printf ("*");
        }
        printf ("\n");
    }
    return 0;
}