//Q69: Find the second largest element in an array.

/*
Sample Test Cases:
Input 1:
5
10 20 30 40 50
Output 1:
40

*/
#include <stdio.h>
int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max = arr[0];
    int smax = -1; 
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            smax = max;
            max = arr[i];
        } else if (arr[i] > smax && arr[i] < max) {
            smax = arr[i];
        }
    }

    if (smax == -1)
        printf("No second maximum element found.\n");
    else
        printf("The second maximum element is: %d\n", smax);

    return 0;
}
