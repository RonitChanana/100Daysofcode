//Q72: Find the sum of all elements in a matrix.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
21

*/
#include<stdio.h>
int main(){
    int r,c;
    printf ("Enter the value of r and c :");
    scanf ("%d %d",&r,&c);
    int arr[r][c];
    int sum=0;
    for (int i=0;i<r;i++){
        for (int j=0;j<c;j++){
            scanf ("%d",&arr[i][j]);
            sum+=arr[i][j];
        }
    }
    printf ("%d",sum);

    return 0;
}