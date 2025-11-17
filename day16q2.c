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