//Q32: Write a program to check if a number is a palindrome.

/*
Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome

*/
#include<stdio.h>
int main(){
    int n,origional,reverse=0;
    printf ("enter the value of number :");
    scanf ("%d",&n);
    origional=n;
    while (n!=0){
        int digit=n%10;
        reverse=reverse*10+digit;
        n=n/10;
    } 
    if (origional==reverse){
        printf ("THe number %d is palandrome",origional);
    }
    else{
        printf ("the number %d is not palandrome",origional);
    }
    return 0;
}