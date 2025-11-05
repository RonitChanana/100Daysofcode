//Q13: Write a program to input a year and check whether it is a leap year or not using conditional statements.

#include<stdio.h>
int main(){
int year;
printf ("Enter the value of year :");
scanf ("%d",&year);

if ((year%4==0) || ((year%400==0)) && ((year!=0)))
printf ("%d is a leap year",year);

else
printf ("%d is not a leap year",year);



return 0;



}