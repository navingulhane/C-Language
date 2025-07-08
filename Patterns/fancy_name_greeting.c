// Simple Stylish Welcome ^_^

#include <stdio.h>

int main() {
    char name[50];

    printf("Enter your name:\n==> ");
    scanf("%s", name);

    printf("\n===========================\n");
    printf("||   Hello, %-12s||\n", name);
    printf("||  Welcome to C World!  ||\n");
    printf("===========================\n");

    return 0;
}
