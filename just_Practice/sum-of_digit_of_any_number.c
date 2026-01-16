//.
#include <stdio.h>
    int main () {
    int num ,digit ,sum = 0;
    
    printf("Enter any number :");
    scanf("%d",&num);
  
    for( ; num > 0 ; num = num / 10 ) {
        
        digit = num % 10 ;
        
        sum = sum + digit;
    }
        printf("%d",sum);
    
}
