 //HOLLOW TRIANGLE [^_^]
    #include <stdio.h>
    int main ()  {
    int i , j , n;
    
    printf("Enter the number of rows\n");
    printf("==> ");
    scanf("%d", &n);
    
    for(i = 1; i <= n; i++) {
    for(j = 1; j <= i; j++) {
  // Print star[ * ]in the beginning ^_^ 
    if(j == i|| j == 1 || i == n ) 
    printf("* ");
    else
  // Print space where [ j != i&1 ]; [ i != n ] ^_^ 
    printf("  ");
    }
    printf("\n");
    }
    return 0;
    }
