//Q34: Write a program to check if a number is prime.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Prime

Input 2:
10
Output 2:
Not prime

*/
#include<stdio.h>
int main(){
    int n,i, count;
    printf ("Enter the value of n :");
    scanf ("%d",&n);
    
    if (n<=1){
        printf ("not prime");
        return 0;
    }
    for (i=2;i<=n/2;i++){
        if (n%i==0){
            count=1;
            break;
        }
    }
    if (count==0)
    printf ("prime");
    else
    printf ("not prime");
    return 0;
}
    
            
     