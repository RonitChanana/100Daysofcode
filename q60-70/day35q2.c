//Q70: Rotate an array to the right by k positions.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
4 5 1 2 3

*/
#include<stdio.h>
void reverse (int arr[],int si,int ei){
    for (int i=si,j=ei;i<j;i++,j--){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    return;
}
int main(){
    int n,k;
    printf ("enter the value of n :");
    scanf ("%d",&n);
    int arr[n];
    printf ("enter the value of k :");
    scanf ("%d",&k);
    printf ("enter the number of %d elements",n);
    
    for (int i=0;i<n;i++){
        scanf ("%d",&arr[i]);
    }
    k=k%n;
        reverse(arr,0,n-1);
        reverse(arr,0,k-1);
        reverse(arr,k,n-1);
        printf ("after rotation k times");
      for (int i=0;i<n;i++){
          printf ("%d ",arr[i]);
      }
          
    return 0;
}
