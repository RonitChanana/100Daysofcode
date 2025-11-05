//Q11: Write a program to input an integer and check whether it is even or odd using if–else.

#include<stdio.h>
int main(){
    int n;
    printf ("Enter the value of n :");
    scanf ("%d",&n);

    if (n%2==0){
        printf ("%d the given number is even",n);
    }
    else{
        printf ("%d the given number is odd",n);
    }
    return 0;
}