//Q147: Store employee data in a binary file using fwrite() and read using fread().

/*
Sample Test Cases:
Input 1:
Employee details entered and stored in file.
Output 1:
Displays employee data read from file.

*/
#include <stdio.h>

struct Employee {
    char name[20];
    int id;
};

int main() {
    struct Employee emp, empRead;
    FILE *fp;


    fp = fopen("employee.bin", "wb");
    
    printf("Enter employee name: ");
    scanf("%s", emp.name);

    printf("Enter employee ID: ");
    scanf("%d", &emp.id);

    fwrite(&emp, sizeof(emp), 1, fp);
    fclose(fp);

    printf("\nEmployee details saved successfully!\n");

    fp = fopen("employee.bin", "rb");

    fread(&empRead, sizeof(empRead), 1, fp);
    fclose(fp);

    printf("\n--- Employee Data Read From File ---\n");
    printf("Name: %s\nID: %d\n", empRead.name, empRead.id);

    return 0;
}
