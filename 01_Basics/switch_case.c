// Simple Switch Case in C 

#include <stdio.h>

int main() {
    int choice;

    printf("Enter a number (1-3): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("You chose option 1 \n");
            break;
        case 2:
            printf("Option 2 it is! \n");
            break;
        case 3:
            printf("Nice! Option 3 selected \n");
            break;
        default:
            printf("Invalid choice! \n");
    }

    return 0;
}
