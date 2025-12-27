.// CHECKS IF A NUMBER IS PRIME OR NOT....^_^
    #include <stdio.h>

    int main() {
    int num, i, isprime = 1;
    
    printf("Enter a positive integer :");
    scanf("%d", &num);
    
    if (num <= 1) {
       isprime = 0;
    }
    else {
        for( i = 2; i <= num/2; i++ )
        if(num % i == 0) {
            isprime = 0;
     break;
    }
    }
   
    if (isprime) {
        printf("%d is a prime number ^_^\n", num);
    }
    else{
        printf("%d is not a pime number :(\n",num);
    }
    return 0;
    }
   
