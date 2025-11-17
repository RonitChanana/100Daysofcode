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