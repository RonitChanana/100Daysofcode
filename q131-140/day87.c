//Q137: Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.

/*
Sample Test Cases:
Input 1:
GUEST
Output 1:
Welcome Guest!

*/
#include<stdio.h>
#include<string.h>
enum Role {ADMIN,GUEST,USER};
int main(){
    char input[20];
    enum Role role;
    scanf ("%s",input);
    if (strcmp(input,"ADMIN")==0)
    role=ADMIN;
    else if (strcmp(input,"GUEST")==0)
    role=GUEST;
    else if (strcmp(input,"USER")==0)
    role=USER;
    else
    printf ("invalid input");
    switch(role){
        case ADMIN :
        printf ("WELCOME ADMIN!");
        break;
        case GUEST :
        printf ("WELCOME GUEST!");
        break;
        case USER :
        printf ("Welcome USER!");
        break;

    }
    return 0;
}