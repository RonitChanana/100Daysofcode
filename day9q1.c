//Q17: Write a program to find the roots of a quadratic equation and categorize them.

/*
Sample Test Cases:
Input 1:
1 -3 2
Output 1:
Roots are real and different: 2, 1

Input 2:
1 -2 1
Output 2:
Roots are real and same: 1

Input 3:
1 2 5
Output 3:
Roots are complex

*/


#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c,realpart,imagpart,discriminant,root1,root2;
    printf ("Enter the value of a,b,c :");
    scanf ("%f %f %f",&a,&b,&c);
    discriminant=b*b-4*a*c;

    if (discriminant>0){
        root1=(-b+sqrt(discriminant)/2*a);
        root2=(-b-sqrt(discriminant)/2*a);
        printf ("root1 is %f root2 is %f",root1,root2);

    }
    else if(discriminant==0){
        root1=-b/2*a;
        printf ("roots are real and equal %.2f",root1);


    }
    else{
        realpart = -b / (2*a);
        imagpart = sqrt(-discriminant) / (2*a);
        printf("Roots are complex: %.2f + %.2fi and %.2f - %.2fi\n",
               realpart, imagpart, realpart, imagpart);
    }
    
    return 0;
}
