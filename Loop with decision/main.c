#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello\n");
    int input_Number = 0;
    int negative_Count = 0;

    printf("Please enter 5 integers (positive or negative):\n");

    // Loop runs exactly 5 times
    for (int i = 1; i <= 5; ++i) {
        printf("Enter value %d: ", i);
        scanf("%d", &input_Number);

        // Decision statement nested inside the loop body
        if (input_Number < 0) {
            negative_Count++; // counts only if input is negative
        }
    }

    printf("\nYou entered %d negative numbers.\n", negative_Count);

    return 0;
    return 0;
}
