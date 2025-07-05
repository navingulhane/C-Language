  //Check the smallest of 3 number  
    
    #include<stdio.h>
    int main ( ){
   
    int a , b , c;
    printf("Enter 3 numbers:\n");
    scanf("%d %d %d",&a , &b ,&c);
    
    if (a <= b && a <= c) {
        printf("%d is the smallest number\n", a);
        }
    else if (b <= a && b <= c) {
        printf("%d is the smallest number\n", b);
    }    
    else{
        printf("%d is the smallest number\n",c);
    }
    return 0;
    }
