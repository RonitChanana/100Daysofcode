//Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

/*
Sample Test Cases:
Input 1:
3 3 3
Output 1:
Equilateral

Input 2:
3 3 4
Output 2:
Isosceles

Input 3:
2 3 4
Output 3:
Scalene

*/
#include<stdio.h>
int main(){
    int a,b,c;

    printf ("ENTER THE VALUE OF a");
    scanf ("%d",&a);

    printf ("ENTER THE VALUE OF b");
    scanf ("%d",&b);

    printf ("ENTER THE VALUE OF c");
    scanf ("%d",&c);

    if ((a+b>c) && (b+c>a) && (a+c>b)){
        printf("THE TRIANGLE IS VALID ");
        
    
     if ((a==b) && (b==c))
        printf ("THE TRIANGLE IS EQVILATERAL");
     
     else if ((a==b) || (b==c) || (c==a))
        printf ("the triangle is isoceles ");
     
     else
        printf ("the triangle is scalene ");
    }
        else{
            printf ("THE TRIANGLE IS NOT VALID");

    
        }


    

    return 0;
}
