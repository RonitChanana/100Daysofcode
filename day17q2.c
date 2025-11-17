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
    
            
     