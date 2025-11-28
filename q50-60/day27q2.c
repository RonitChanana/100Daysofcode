// Q54: Write a program to print the following pattern:

//    *
//   ***
//  *****
// *******
//  *****
//   ***
//    *


/*
Sample Test Cases:
Input 1:

Output 1:
Pattern with layers of stars as shown.

*/
#include<stdio.h>
int main(){
    int n;
    printf ("Enter the value of n :");
    scanf ("%d",&n);
  int  nst=1;
   int  nsp=n/2;
   int ml =(n/2 +1);

    for (int i=1;i<=n;i++ ){
        for (int j=1;j<=nsp;j++){
            printf (" "); //for spaces
        }
        for (int k=1;k<=nst;k++){
            printf ("*");
        }
        if (i<ml){
         nst=nst+2;
        nsp--;
        }
        else{
            nst=nst-2;
            nsp++;
        }
        printf ("\n");
    }
    return 0;
}