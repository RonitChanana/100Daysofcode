//Q98: Print initials of a name with the surname displayed in full.

/*
Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/
#include <stdio.h>

int main() {
    char name[200];
    scanf("%[^\n]s", name);

    int last = -1;

    
    for (int i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ')
            last = i;
    }

  
    printf("%c.", name[0]);

    for (int i = 1; i < last; i++) {
        if (name[i] == ' ')
            printf("%c.", name[i + 1]);
    }

    
    printf(" %s", &name[last + 1]);

    return 0;
}
