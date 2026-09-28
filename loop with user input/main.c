#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello!\n");
    int loop_Count = 1; // Controls the iteration count
    int Input_num = 0;
    int Sum = 0;

    printf("Enter 5 numbers to find their total value:\n");

    // Loops exactly five times to safely ingest discrete user inputs
    while (loop_Count <= 5) {
        printf("Enter value %d: ", loop_Count);
        scanf("%d", &Input_num);

        Sum += Input_num; // Add input to running sum
        loop_Count++; // If not put it will keep requiring the user to enter value1
    }

    printf("\nCombined total value is: %d\n", Sum);
    return 0;
}
