   #include <stdio.h>

   int main() {
       
   int n, sum;
   
   printf("Enter a positive integer");
   scanf("%d", &n);
  
   sum = n * (n+1)/2;
   
   printf("The sum of first %d natural no is:%d\n", n,sum);
   
   return 0;
   }
