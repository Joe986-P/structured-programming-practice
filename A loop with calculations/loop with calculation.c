#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello!\n");
     int total_Sum = 0; // variable(totalsum) initialized to zero

    // starts from 2 up to 30, jumping by 2 each time to select evens
    for (int number = 2; number <= 30; number += 2) {
        total_Sum += number; // Adds the current even number to the sum
    }

    printf("The total sum of even integers from 2 to 30 is: %d\n", total_Sum);
    return 0;
}
