
..  // Mini Calculator using Switch-Case \_(^0^)_/      
     #include <stdio.h>              //  |   |
    int main() {                   //    /---\
    char operator;                //    /     \
    float num1 ,num2 ;

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);  // Space before %c is important

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    switch (operator) {
        case '+':
            printf("%.2f + %.2f = %.2f\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf("%.2f - %.2f = %.2f\n", num1, num2, num1 - num2);
            break;
        case '*':
            printf("%.2f * %.2f = %.2f\n", num1, num2, num1 * num2);
            break;
        case '/':
            if (num2 != 0)
                printf("%.2f / %.2f = %.2f\n", num1, num2, num1 / num2);
            else
                printf("Error: Division by zero is not allowed.\n");
            break;
        default:
            printf("Invalid operator! Please use +, -, *, or /.\n");
    }

    return 0;
}

