//Q74: Find the transpose of a matrix.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
1 4
2 5
3 6

*/
#include<stdio.h>
int main(){
    int r,c;
    printf ("enter the value of r and c ");
    scanf ("%d %d",&r,&c);
    int arr[r][c];
    int trans[c][r];
    for (int i=0;i<r;i++){
        for (int j=0;j<c;j++){
            scanf ("%d",&arr[i][j]);
        }
    }
    for (int i=0;i<r;i++){
        for (int j=0;j<c;j++){
             trans[j][i]=arr[i][j];
        }
    }
        for (int i=0;i<c;i++){
            for (int j=0;j<r;j++){
                printf ("%d ",trans[i][j]);
            }
            printf ("\n");
        }


    return 0;
    }
