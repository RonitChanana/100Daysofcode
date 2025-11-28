//Q62: Reverse an array without taking extra space.

/*
Sample Test Cases:
Input 1:
4
1 2 3 4
Output 1:
4 3 2 1

*/
#include<stdio.h>
int main(){
    int n,temp;
    printf ("enter the value of n :");
    scanf ("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf ("%d",&arr[i]);
    }
    for (int i=0,j=n-1;i<j;i++,j--){
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    printf ("reversed array is : ");
    for (int i=0;i<n;i++){
        printf ("%d",arr[i]);
    }
    
    return 0;
}