//Q134: Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.

/*
Sample Test Cases:
Input 1:
FAILURE
Output 1:
Operation failed

*/
#include<stdio.h>
#include<string.h>

enum Status {SUCCESS,FAILUR,TIMEOUT};
int main(){
    char input[10];
enum Status state;
scanf ("%s",input);
if (strcmp(input,"SUCCESS")==0)
    state=SUCCESS;
    else if (strcmp(input,"FALIUR")==0)
    state=FAILUR;
    else if (strcmp(input,"TIMEOUT")==0)
    state=TIMEOUT;
    else{
        printf ("invalid input");
        return 0;

    }
    switch(state){
        case SUCCESS :
        printf ("operation succesfully!");
        break;
        case FAILUR :
        printf ("operation falied");
        break;
        case TIMEOUT :
        printf ("operatio timeout");
        
    }
    return 0;
}