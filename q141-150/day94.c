//Q144: Write a function that accepts a structure as parameter and prints its members.

/*
Sample Test Cases:
Input 1:
Student: Neha 104 92
Output 1:
Name: Neha | Roll: 104 | Marks: 92

*/
#include <stdio.h>


struct Student {
    char name[30];
    int roll;
    float marks;
};


void printStudent(struct Student s) {
    printf("Name: %s | Roll: %d | Marks: %.0f", s.name, s.roll, s.marks);
}

int main() {
    struct Student s;

    printf("Enter Name: ");
    scanf("%s", s.name);

    printf("Enter Roll No: ");
    scanf("%d", &s.roll);

    printf("Enter Marks: ");
    scanf("%f", &s.marks);

    
    printStudent(s);

    return 0;
}
