//Q83: Count vowels and consonants in a string.

/*
Sample Test Cases:
Input 1:
hello
Output 1:
Vowels=2, Consonants=3

*/
#include<stdio.h>
int main(){
    char str[100];
    int c=0,v=0;
    puts("Enter a string :");
    scanf ("%[^\n]",str);
    for (int i=0;str[i]!='\0';i++){
        char ch=str[i];
        if ((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')){

            if (ch=='a' || ch=='A' ||ch=='e' ||ch=='E' || ch=='i' || ch=='I' || ch=='o' || ch=='O' || ch=='u' ||ch=='U' ) {
                v++;
            }
            else{
                c++;
            }
        }

    }
    printf ("vowels=%d and consonants=%d",v,c);
    return 0;

}