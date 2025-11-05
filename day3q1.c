 //Q5: Write a program to convert temperature from Celsius to Fahrenheit.


 #include<stdio.h>


int main(){
    float C,F;

    printf ("Enter the value of C :");
    scanf ("%f",&C);

    F=(9.0/5)*C+32;
    printf  ("Fahrenheit=%.2f\n",F);
    return 0;
}