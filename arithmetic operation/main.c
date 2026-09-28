#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello!\n");
    int num1 = 0;
    int num2 = 0;

    printf("Enter first integer: ");
    scanf("%d", &num1);

    printf("Enter second integer: ");
    scanf("%d", &num2);

    // Processing and Outputting immediately
    printf("Sum is %d\n", num1 + num2);
    printf("Product is %d\n", num1 * num2);
    printf("Difference is %d\n", num1 - num2);

    return 0;
}
