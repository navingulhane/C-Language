  // Mini Calculator using Switch Case \_(^0^)_/      
    #include <stdio.h>              //   |   |
    int main() {                   //    /---\
    char operator;                //    /     \
    float num1 ,num2 ;

    printf("\nEnter an operator (+, -, *, /):\n");
    scanf(" %c", &operator); 
  // space before %c is must ^_^

    printf("Enter 2 numbers:\n");
    scanf("%f %f", &num1, &num2);

    switch(operator) {
    
    case '+':
    printf("Result %.2f\n", num1 + num2);
    break;
    
    case'-':
    printf("Result %.2f\n", num1 - num2);
    break;
     
    case '*':
    printf("Result %.2f\n", num1 * num2);
    break;
    
    case '/':
    if(num2 != 0){
    printf("Result %.2f\n", num1 / num2);
    }
    else {
    printf("Error : cannot divide by zero ^_^\n");
    }
    break;
    
    default:
    printf("Invalid operator!\n");
    }
    
    return 0;
    }
