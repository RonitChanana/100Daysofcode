//Q27: Write a program to print the sum of the first n odd numbers.

/*
Sample Test Cases:
Input 1:
3
Output 1:
9

Input 2:
5
Output 2:
25

*/
#include<stdio.h>
int main(){
    int n;
    printf ("Enter the value of n :");
    scanf ("%d",&n);
    int sum=0;
    for (int i=0;i<=n;i++){
        sum=sum+i;
    }
    printf ("sum of n natural number is %d",sum);
    return 0;
}