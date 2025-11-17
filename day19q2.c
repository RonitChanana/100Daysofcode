#include<stdio.h>
int main(){
    int sum=0,n,digit;
    printf ("enter the value of n :");
    scanf ("%d",&n);
    while(n!=0){
        digit=n%10;
        sum=sum+digit;
        n=n/10;
    }
    printf ("the sum of the digits of the given number is %d",sum);

    return 0;
}