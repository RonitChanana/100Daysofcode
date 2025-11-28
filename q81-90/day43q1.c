//Q85: Reverse a string.

/*
Sample Test Cases:
Input 1:
abcd
Output 1:
dcba

*/
#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int size=0;
    puts("Enter the string :");
    scanf ("%[^\n]",str);
    for (int i=0;str[i]!='\0';i++){
        size++;

    } 
    for (int i=0,j=size-1;i<=j;i++,j--){
        char temp=str[i];
        str[i]=str[j];
        str[j]=temp;
    }
   puts("the reverse string is :");
   puts (str);
}