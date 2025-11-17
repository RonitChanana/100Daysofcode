#include<stdio.h>
int main(){
    int n,r,p=1;
    printf ("Enter the value of n:");
    scanf ("%d",&n);
    while (n!=0){
        r=n%10;
        if (r%2==1)
            p=p*r;
           n= n/10;
    }
     printf ("product of odd digits = %d",p);
    return 0;
}