#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello!\n");
      int user_Choice = 0;
    int side_Value = 0;

    // The loop keeps running until the user types (3)
    while (user_Choice != 3) {
        // Displaying a user menu
        printf("\n--- Interactive Geometric Menu ---\n");
        printf("1. Enter Square Perimeter\n");
        printf("2. Enter Square Area\n");
        printf("3. Exit Program\n");
        printf("Select an option (1-3): ");
        scanf("%d", &user_Choice);

        // Process choices using switch-case decision logic
        switch (user_Choice) {
            case 1:
                printf("Enter the side length of the square: ");
                scanf("%d", &side_Value);
                printf("Result: The perimeter is %d units.\n", 4 * side_Value);
                break;

            case 2:
                printf("Enter the side length of the square: ");
                scanf("%d", &side_Value);
                printf("Result: The area is %d square units.\n", side_Value * side_Value);
                break;

            case 3:
                printf("Exiting application. Have a nice day!\n");
                break;

            default:
                printf("Invalid selection! Please enter 1, 2, or 3.\n");
        }
    }
    return 0;
}
