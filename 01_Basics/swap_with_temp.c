// Swapping of two numbers ^___^..
  
    #include <stdio.h>

    int main() {
    int a, b, temp;

    printf("Enter two numbers:\n");
    printf("==> ");
    scanf("%d %d", &a, &b);

    printf("\n< == == == RESULT == == == >\n");
    printf("\nBefore swapping: a = %d, b = %d\n", a, b);

 // Swapping logic... [^o^],.,.,
 
    temp = a;
    a = b;
    b = temp;

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
    }
