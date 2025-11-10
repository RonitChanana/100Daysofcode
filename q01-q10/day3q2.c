// Q6: Write a program to swap two numbers using a third variable.


 #include<stdio.h>
int main(){
    int a,b,c;
    printf ("Enter the value of a :");
    scanf ("%d",&a);

     printf ("Enter the value of b :");
     scanf ("%d",&b);
    c=a;
    a=b;
    b=c;

    printf ("VALUE of a after swap %d\n",a);
    printf ("VALUE of b after swap %d\n",b);


    return 0;
}
