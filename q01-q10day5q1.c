//Q9: Write a program to calculate simple and compound interest forr given principal, rate, and time.


#include<stdio.h>
#include<math.h>
int main(){
    float p,r,t;
    float SI,CI;

    printf ("Enter the value of p,r,t");
    scanf ("%f %f %f",&p,&r,&t);

    SI=(p*r*t)/100;
    CI=p*pow(1+r/100,t)-p;

    printf ("THE SI IS %.2f\n",SI);
    printf ("THE CI IS %.2f\n",CI);

    return 0;
}
