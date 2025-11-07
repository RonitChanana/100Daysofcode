//Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

#include <stdio.h>

int main() {
    int length, breadth, area, perimeter;
    printf ("Enter the value of length\n");
    printf ("Enter the value of breadth\n");
    scanf("%d %d", &length, &breadth);
    
    area = length * breadth;
    perimeter = 2 * (length + breadth);
    
    
    printf("Area=%d, Perimeter=%d", area, perimeter);
    
    return 0;
}


