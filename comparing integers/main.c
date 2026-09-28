#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello!\n");
    int num1 = 0;
    int num2 = 0;

    printf("Enter two integers to compare:\n ");
    scanf("%d %d", &num1, &num2);
//defining number 1 being greater
    if (num1 > num2) {
        printf("%d is larger.\n", num1);
    }
//defining number 2 being greater
    else if (num2 > num1) {
        printf("%d is larger.\n", num2);
    }
//considering the values being equal
    else {
        printf("These numbers are equal.\n");
    }

    return 0;
}
