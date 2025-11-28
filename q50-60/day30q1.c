//Q59: Count even and odd numbers in an array.

/*
Sample Test Cases:
Input 1:
6
1 2 3 4 5 6
Output 1:
Even=3, Odd=3

Input 2:
4
2 4 6 8
Output 2:
Even=4, Odd=0

*/
#include<stdio.h>
int main(){
    int n;
    
    printf ("enter the value of n:");
    scanf ("%d",&n);
    int arr[n];
    int odd=0;
    int even=0;
    printf ("the number of element is %d",n);
    for (int i=0;i<n;i++){
        scanf ("%d",&arr[i]);
    }
    for (int i=0;i<n;i++){
        if (arr[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    printf ("the number of odd elements are %d and no of even are %d",odd,even);

    return 0;
}