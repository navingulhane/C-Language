 // doing arithmetic operations with two numbers. 

     #include <stdio.h>
     int main ( )  {
   
     int a , b ; 
   
     printf("Entre two number :\n");
     scanf("%d  %d" , &a , &b);
     
     printf("\n---Result---\n");
     printf("Addition :%d\n" , a+b);
     printf("Subtraction :%d\n" , a-b);
     printf("Multiplication :%d\n", a*b);
    
  //for division there is special case a loop is used for it [If Else loop] ^_^
    
    if(b != 0) {
        printf("Division :%f\n", (float) a/b );
    }
    else {
        printf("Dividion not possible [b = 0]\n");
    }
    }
