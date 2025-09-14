 // Online C compiler to run C program online
  #include <stdio.h>
  int main () {
  int a , b ;
  printf("Enter two numbers :\n");
  scanf("%d %d" , &a , &b);
    
 // Swapping without a temp....
 
  a = a + b;
  b = a - b;
  a = a - b;
 
  printf("After swapping :\n");
  printf("a = %d\n",a);
  printf("b = %d\n",b);
 
  return 0;
  }   
