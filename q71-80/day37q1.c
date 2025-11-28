//Q73: Find the sum of each row of a matrix and store it in an array.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
6 15

*/
#include<stdio.h>
int main(){
    int r,c;
    printf ("enter the value of r and c : ");
    scanf ("%d %d",&r,&c);
    int arr[r][c];
    int rowsum[r];
    for (int i=0;i<r;i++){
        rowsum[i]=0;
        for (int j=0;j<c;j++){
            scanf ("%d",&arr[i][j]);
            rowsum[i]+=arr[i][j];
        }
    }
    for (int i=0;i<r;i++){
        printf ("%d ",rowsum[i]);
    }
    return 0;
}