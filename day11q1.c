#include<stdio.h>
int main(){
    int n;

    printf ("Enter the value of n:");
    scanf ("%d",&n);

    switch (n){
        case 1:
        printf ("January,31days");
        break;

        case 2:
        printf ("febuary,28days");
        break;

        case 3:
        printf ("march,31days");
        break;

        case 4:
        printf ("april,30days");
        break;

        case 5:
        printf ("may,31days");
        break;

        case 6:
        printf ("june,30days");
        break;

        case 7:
        printf ("july,31days");

        case 8:
        printf ("august,31days");
        break;

         case 9:
        printf ("september,30days");
        break;

         case 10:
        printf ("october,31days");
        break;

         case 11:
        printf ("november,30days");
        break;

         case 12:
        printf ("december,31days");
        break;

        

        default :
        printf ("not a valid month");
    }
    

    return 0;
}